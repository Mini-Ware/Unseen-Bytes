#include <iostream>
#include <stdio.h>
#include <filesystem>
#include <string.h>
#include <sys/stat.h>
#include "encrypt.cpp"

using namespace std;
namespace fs = std::filesystem;

int main() {
    string directory;
    cout << "directory? ";
    cin >> directory;
    cout << "target directory - "+directory+"\n";
    
    string key;
    cout << "key? ";
    cin >> key;
    cout << "configured key - "+key+"\n";

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
            if (strcmp(ext,".ub") == 0){
            }else{
                // else set mode to decrypt
            }
    }
}