#include <iostream>
#include <string>
#include <math.h>

namespace mine {
    float input(std::string message) {
        std::cout << message;
        float temp;
        std::cin >> temp;
        return temp;
    }

    float showResults(float a_coeff, float b_coeff, float c_coeff) {
        float root1 = (b_coeff * -1) + sqrt((b_coeff * b_coeff) - 4 * a_coeff * c_coeff);
        float root2 = (b_coeff * -1) - sqrt((b_coeff * b_coeff) - 4 * a_coeff * c_coeff);


        std::cout << "First root is equal to " << root1 << std::endl;
        std::cout << "Second root is equal to " << root2 << std::endl;
    }
}

int main() {
    printf("Hi, I can count roots of quadratic equation\nEnter three coefficients firstly");

    printf("Enter coefficient \'a\'\n> ");
    float a_coeff = mine::input("Enter coefficient \'a\'\n> ");
    float b_coeff = mine::input("Enter coefficient \'b\'\n> ");
    float c_coeff = mine::input("Enter coefficient \'c\'\n> ");

    mine::showResults(a_coeff, b_coeff, c_coeff);

    system("read");

    return 0;
}
