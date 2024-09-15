#ifndef ENCRYPT_HPP
#define ENCRYPT_HPP

#include <string>

namespace encryption {
    class EncryptionAlgorithm {
        public:
            EncryptionAlgorithm(const std::string& key);
            std::string encrypt(const std::string& plaintext);
            std::string decrypt(const std::string& ciphertext);
        private:
    };
}

#endif