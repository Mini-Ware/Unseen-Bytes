#include <filesystem>
#include <iostream>
#include <string>
#include <sys/stat.h>
#include "encrypt.cpp"

using namespace std;
using namespace encryption;

int main() {
    char directory[] = "";
    cout << "directory? ";
    cin >> directory;
    
    char key[] = "";
    cout << "key? ";
    cin >> key;

    // loop files and apply change based on mode
        // if not ub extension, set mode to encrypt
        // else set mode to decrypt
}