#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
    ifstream inputFile("input.txt", ios::binary);
    ofstream outputFile("output.txt", ios::binary);

    if (!inputFile.is_open() || !outputFile.is_open()) {
        cerr << "Error opening files." << endl;
        return 1;
    }

    char buffer[1024];
    while (!inputFile.eof()) {
        inputFile.read(buffer, sizeof(buffer));
        for (int i = 0; i < inputFile.gcount(); ++i) {
            buffer[i] ^= 0x5A; // XOR with the key 0x5A
        }
        outputFile.write(buffer, inputFile.gcount());
    }

    inputFile.close();
    outputFile.close();

    cout << "XOR operation completed successfully." << endl;
    return 0;
}