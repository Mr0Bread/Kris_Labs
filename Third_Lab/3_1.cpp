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

float getMaximum() {
    float number1 = stof(mine::input("Enter first number\n> "));
    float number2 = stof(mine::input("Enter second number\n> "));
    float number3 = stof(mine::input("Enter third number\n> "));

    float numbers[3]{number1, number2, number3};

    for (int i = 0; i < 2; i++) {
        if (numbers[i] < numbers[i + 1]) {
            std::swap(numbers[i], numbers[i + 1]);
            i = -1;
        }
    }

    return numbers[0];
}

int main() {
    print << getMaximum() << newline;

    system("read");
    return 0;
}