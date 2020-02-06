#include <iostream>
#include <iomanip>

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
    float number1 = mine::input("Enter first real number\n> ");
    float number2 = mine::input("Enter second real number\n> ");
    float number3 = mine::input("Enter third real number\n> ");

    print << std::setprecision(2) << std::fixed << (number1 + number2 + number3) / 3 << newline;

    system("read");
    return 0;
}

