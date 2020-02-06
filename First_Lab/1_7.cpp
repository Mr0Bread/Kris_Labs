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
    int age = mine::input("Enter your age\n> ");

    if (age >= 18) {
        print << "You are able to apply for driving license\n";
    } else if (age < 0) {
        print << "You entered negative number\n";
    } else {
        print << "You aren't able to apply for driving license\nYou need to wait " << 18 - age << " years\n";
    }


    system("read");
    return 0;
}
