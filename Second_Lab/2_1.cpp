#include <iostream>
#include <string>
#include <cstring>

#define print std::cout
#define get std::cin
#define newline std::endl

namespace mine {
    std::string input(std::string message) {
        print << message;
        std::string temp;
        get >> temp;
        return temp;
    }
}

int main() {
    std::string line = mine::input("Enter string to work with\n> ");

    print << "string: " << line << newline;
    print << "Length of string: " << line.length() << newline;

    char char_line[line.length()];

    for (int i = 0; i < line.length(); ++i) {
        char_line[i] = line[i];
    }

    print << "array of chars: " << char_line << newline;
    print << "Length of char array: " << strlen(char_line) << newline;


    system("read");
    return 0;
}
