#include <iostream>

using namespace std;

string input(string message) {
    print << message;
    std::string temp;
    cin >> temp;
    return temp;
}

string encode(string basicString) {
    string encoded;
    for (char i : basicString) {
        char encoded_char = i - 30;
        encoded += encoded_char;
    }

    return encoded;
}

int main() {
    string password = input("Enter your password\n> ");
    string encodedPassword = encode(password);

    cout << encodedPassword << endl;

    string repeatedPassword = input("Enter your password one more time\n> ");
    string encodedRepeatedPassword = encode(repeatedPassword);

    cout << encodedRepeatedPassword << endl;

    if (encodedPassword == encodedRepeatedPassword) {
        cout << "Passwords are the same" << endl;
    } else {
        cout << "Passwords differs" << endl;
    }

    system("read");
    return 0;
}
