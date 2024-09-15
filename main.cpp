#include <iostream>
using namespace std;
#include "encrypt.cpp"
using namespace encryption;

int main() {
    // cli tool - future implementation
    // cout << "--encrypt <key>    encrypts all sensitive files";
    // cout << "--decrypt <key>    decrypts all encrypted files";

    // default, interactive
    cout << "unseen bytes\n";
    cout << "1) encrypts all sensitive files\n";
    cout << "2) decrypts all encrypted files\n";
    cout << "input? ";
    int mode;
    cin >> mode;

    if (mode == 1){
        cout << "encryption selected\n";
    }else if (mode == 2){
        cout << "decryption selected\n";
    }else{
        cout << "invalid selection\n";
    }

    cout << "end of program, thanks for using unseen bytes!";
}