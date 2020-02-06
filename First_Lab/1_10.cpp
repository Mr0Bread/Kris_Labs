#include <iostream>

#define print std::cout
#define get std::cin
#define newline std::endl
#define PI 3.14159

namespace mine {
    float input(std::string message) {
        print << message;
        float temp;
        get >> temp;
        return temp;
    }

    void printArea(float radius) {
        print << PI * (radius * radius) << newline;
    }

    void printCircumference(float radius) {
        print << 2 * PI * radius << newline;
    }
}

int main() {
    float radius = mine::input("Enter radius of a circle\n> ");

    mine::printArea(radius);
    mine::printCircumference(radius);

    system("read");
    return 0;
}
