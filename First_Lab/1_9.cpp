#include <iostream>

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

    std::string encode(std::string basicString) {
        std::string encoded;
        for (char i : basicString) {
            char encoded_char = i - 30;
            encoded += encoded_char;
        }

        return encoded;
    }
}

int main() {
    std::string password = mine::input("Enter your password\n> ");
    std::string encodedPassword = mine::encode(password);

    print << encodedPassword << newline;

    std::string repeatedPassword = mine::input("Enter your password one more time\n> ");
    std::string encodedRepeatedPassword = mine::encode(repeatedPassword);

    print << encodedRepeatedPassword << newline;

    if (encodedPassword == encodedRepeatedPassword) {
        print << "Passwords are the same" << newline;
    } else {
        print << "Passwords differs" << newline;
    }

    system("read");
    return 0;
}
