#include <iostream>

#define print std::cout
#define newline std::endl
#define get std::cin

namespace mine {
    float input(std::string message) {
        print << message;
        float temp;
        get >> temp;
        return temp;
    }

    float convertFromFtoC(float temperature) {
        return (temperature - 32) / 1.8;
    }

    float convertFromCtoF(float temperature) {
        return (temperature * 1.80) + 32;
    }
}

int main() {
    float temperature = mine::input("Enter temperature value\n> ");

    bool answer = mine::input("Enter 0 if you want convert from C to F and any other number if from F to C\n> ");

    if (answer) {
        print << mine::convertFromFtoC(temperature) << " is result of converting from Fahrenheit to Celsius" << newline;
    } else {
        print << mine::convertFromCtoF(temperature) << " is result of converting from Celsius to Fahrenheit" << newline;
    }


    system("read");
    return 0;
}

