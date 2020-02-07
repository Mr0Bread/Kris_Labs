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

int countFact(int n) {
    if (n == 1)
        return 1;
    else {
        return n * countFact(n - 1);
    }
}

int main() {
    int n = stoi(mine::input("Enter which factorial you want to get\n> "));

    print << countFact(n);

    return 0;
}
