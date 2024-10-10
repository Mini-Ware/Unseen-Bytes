#include "encrypt.hpp"
#include <openssl/evp.h>
#include <openssl/aes.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;
namespace encryption {

    EncryptionAlgorithm::EncryptionAlgorithm(const std::string& key) {
        string key = key;
    }

    std::string EncryptionAlgorithm::encrypt(const std::string& filename) {
        cout << "Encryption is selected - "+filename+"\n";
        // extract file contents
        // encrypt the contents
        // save the file
        // extract file name
        // encrypt file name
        // rename the file
    }

    std::string EncryptionAlgorithm::decrypt(const std::string& filename) {
        cout << "Decryption is selected - "+filename+"\n";
        return filename;
    }

}