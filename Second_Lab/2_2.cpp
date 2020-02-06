#include <iostream>
#include <string>

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
    std::string name = mine::input("Enter your name, please\n> ");
    std::string surname = mine::input("Enter your surname, please\n> ");

    std::string sum = name + surname;

    print << sum << newline;

    system("read");
    return 0;
}