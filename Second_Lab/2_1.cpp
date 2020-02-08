#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string input(string message) {
    print << message;
    std::string temp;
    cin >> temp;
    return temp;
}

int main() {
    string line = input("Enter string to work with\n> ");

    cout << "string: " << line << endl;
    cout << "Length of string: " << line.length() << endl;

    char char_line[line.length()];

    for (int i = 0; i < line.length(); ++i) {
        char_line[i] = line[i];
    }

    cout << "array of chars: " << char_line << endl;
    cout << "Length of char array: " << strlen(char_line) << endl;


    system("read");
    return 0;
}
