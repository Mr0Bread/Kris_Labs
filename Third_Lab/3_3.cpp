#include <iostream>
#include <string>

#define print std::cout
#define get std::cin
#define newline std::endl

int getFibonacci(int n);

namespace mine {
    std::string input(std::string message) {
        print << message;
        std::string temp;
        get >> temp;
        return temp;
    }
}

int main() {
    int n = stoi(mine::input("Enter number of Fibonacci numbers to display\n> "));

    print << getFibonacci(n);

    return 0;
}

int getFibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return getFibonacci(n - 1) + getFibonacci(n - 2);

}
