#include "encrypt.hpp"
#include <string>

namespace encryption {

    EncryptionAlgorithm::EncryptionAlgorithm(const std::string& key) {
        
    }

    std::string EncryptionAlgorithm::encrypt(const std::string& filename) {
        // cout << "encrypting file\n";
        // change extension to ub
        // encrypt content
        return 0;
    }

    std::string EncryptionAlgorithm::decrypt(const std::string& filename) {
        // cout << "decrypting file\n";
        // revert extension
        // decrypt content
        return 0;
    }

}