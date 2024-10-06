#include "encrypt.hpp"
#include <string>

namespace encryption {

    EncryptionAlgorithm::EncryptionAlgorithm(const std::string& key) {
        
    }

    std::string EncryptionAlgorithm::encrypt(const std::string& filename) {
        cout << "encrypting file\n";
        // encrypt, change extension to ub
    }

    std::string EncryptionAlgorithm::decrypt(const std::string& filename) {
        cout << "decrypting file\n";
        // decrypt, revert extension
    }

}