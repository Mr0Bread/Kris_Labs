#include <iostream>
#include <string>

namespace mine {
    float input(std::string message) {
        std::cout << message;
        float temp;
        std::cin >> temp;
        return temp;
    }
}

int main() {
    float number1 = mine::input("Enter first real number\n> ");
    float number2 = mine::input("Enter second real number\n> ");
    bool truncated = mine::input("Enter 0 if you want rounded result and any other number, if you want truncated one\n> ");

    std::cout << truncated;

    system("read");
    return 0;
}

