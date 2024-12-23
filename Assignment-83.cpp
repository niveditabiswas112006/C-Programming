#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename = "example.txt";
    fstream file(filename, ios::in | ios::out);
    if(!file.is_open()) {
        cout << "error: unable to open the file!";
        return 1;
    }
    
    file << "this is a new line of txt.\n";
    file.close();
    
    ifstream readfile(filename);
    if (!readfile) {
        cout << "file is not found" << endl;
        return 1;
    }
    
    string line;
    cout << "file contents: " << endl;
    while(getline(readfile, line)) {
        cout << line << endl;
    }
    readfile.close();
    return 0;
}