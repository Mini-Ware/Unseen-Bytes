#include <iostream>
#include <stdio.h>
#include <filesystem>
#include <string.h>
#include <sys/stat.h>
#include "encrypt.cpp"

using namespace std;
using namespace encryption;
namespace fs = std::filesystem;

int main() {
    string directory;
    cout << "Folder? ";
    cin >> directory;
    cout << "Folder selected - "+directory+"\n";
    
    string key;
    cout << "Key? ";
    cin >> key;
    cout << "Key selected - "+key+"\n";
    EncryptionAlgorithm encryptor(key);

    // get list of files
    cout << "\nfetching files in directory...\n";
    struct stat sb;
    // loop files and apply change based on mode
    for (const auto& entry : fs::directory_iterator(directory)) {
 
        // Converting the path to const char * in the subsequent lines
        std::filesystem::path outfilename = entry.path();
        std::string outfilename_str = outfilename.string();
        const char* path = outfilename_str.c_str();
 
        // Testing whether the path points to a non-directory or not If it does, displays path
        if (stat(path, &sb) == 0 && !(sb.st_mode & S_IFDIR))
            std ::cout << path << std::endl;

            string ext = outfilename.extension().string();
            cout << "Extension is "+ext+"\n";
        
            // if not ub extension, set mode to encrypt
            if (strcmp(ext.c_str(),".ub")){
                encryptor.encrypt(outfilename_str.c_str());
            }else{
                // else set mode to decrypt
                encryptor.decrypt(outfilename_str.c_str());
            }
    }
}