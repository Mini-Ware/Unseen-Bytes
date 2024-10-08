#include "encrypt.hpp"
#include <string>

using namespace std;
namespace encryption {

    EncryptionAlgorithm::EncryptionAlgorithm(const std::string& key) {
        
    }

    std::string EncryptionAlgorithm::encrypt(const std::string& filename) {
        cout << "Encryption is selected - "+filename+"\n";
        return filename;
    }

    std::string EncryptionAlgorithm::decrypt(const std::string& filename) {
        cout << "Decryption is selected - "+filename+"\n";
        return filename;
    }

}