#include <iostream>
#include <string>
#include <cmath>

#define print std::cout
#define newline std::endl

namespace mine {
    float input(std::string message) {
        std::cout << message;
        float temp;
        std::cin >> temp;
        return temp;
    }

    double returnTruncatedResult(double product) {
        return trunc(product);
    }

    double returnRoundedResult(double product) {
        return round(product);
    }
}

int main() {
    float number1 = mine::input("Enter first real number\n> ");
    float number2 = mine::input("Enter second real number\n> ");
    bool answer = mine::input("Enter 0 if you want rounded result and any other number, if you want truncated one\n> ");

    print << number1 * number2 << newline;

    if (answer) {
        print << mine::returnTruncatedResult(number1 * number2) << " is Truncated result" << newline;
    } else {
        print << mine::returnRoundedResult(number1 * number2) << " is Rounded" << newline;
    }

    print << "Enter any key to close program...";
    system("read");

    return 0;
}

