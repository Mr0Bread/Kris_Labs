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
    std::string stringNumber = mine::input("Enter number\n> ");

    int intNumber = stoi(stringNumber);
    print << "Number after conversion to int: " << intNumber << newline;

    stringNumber = std::to_string(intNumber);
    print << "Number after conversion to string: " << stringNumber << newline;

    system("read");
    return 0;
}


