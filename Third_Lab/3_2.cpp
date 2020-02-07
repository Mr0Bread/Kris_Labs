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
    float number = stof(mine::input("Enter number to raise in square\n> "));
    float* numberPtr = &number;

    print << getSquare1(number) << newline;
    print << getSquare2(numberPtr) << newline;

   system("read");
   return 0;
}
