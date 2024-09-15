#include "encrypt.hpp"
#include <string>

namespace encryption {

    EncryptionAlgorithm::EncryptionAlgorithm(const std::string& key) {
        
    }

    std::string EncryptionAlgorithm::encrypt(const std::string& plaintext) {
        // gather files named password
        // encrypt using aes
    }

    std::string EncryptionAlgorithm::decrypt(const std::string& ciphertext) {
        // gather encrypted files
        // decrypt using aes
        // check if correct
    }

}