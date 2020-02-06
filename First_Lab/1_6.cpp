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
    float length = mine::input("Enter length of rectangular\n> ");
    float width = mine::input("Enter width of rectangular\n> ");

    print << "The area of rectangular is equal to " << length * width << newline;
    print << "The perimeter of rectangular is equal to " << (length * 2) + (width * 2) << newline;

    system("read");
    return 0;
}
