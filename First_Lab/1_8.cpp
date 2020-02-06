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
    int result;

    int num = 0;

    while (true) {
        int tempNum = mine::input("Enter whole number\n> ");

        if (tempNum != 0) {
            num += tempNum;
            print << num << newline;
        } else {
            break;
        }
    }


    system("read");
    return 0;
}
