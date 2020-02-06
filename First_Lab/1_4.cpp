#include <iostream>

#define print std::cout
#define get std::cin
#define newline std::endl

namespace mine {
    float input(std::string message) {
        print << message;
        float temp;
        get >> temp;
        return temp;
    }
}

int main() {
    int number1 = mine::input("Enter first integer number\n> ");
    int number2 = mine::input("Enter second integer number\n> ");

    print << number1 << " / " << number2 << " = " << number1 / number2 << " remainder " << number1 % number2 << newline;

    system("read");
    return 0;
}

