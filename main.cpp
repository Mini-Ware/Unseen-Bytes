#include <iostream>
using namespace std;

int main() {
    // cli tool - future implementation
    // cout << "--encrypt <key>    encrypts all sensitive files";
    // cout << "--decrypt <key>    decrypts all encrypted files";

    // default, interactive
    cout << "unseen bytes\n";
    cout << "1) encrypts all sensitive files\n";
    cout << "2) decrypts all encrypted files\n";
    cout << "input? ";
    int x;
    cin >> x;

    if (x == 1){
        // encrypt
        cout << "encryption selected!";
    }else if (x == 2){
        // decrypt
        cout << "decryption selected!";
    }else{
        //invalid
    }

}