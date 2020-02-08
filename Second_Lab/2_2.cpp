#include <iostream>
#include <string>

using namespace std;

string input(string message) {
    print << message;
    std::string temp;
    cin >> temp;
    return temp;
}

int main() {
    string name = input("Enter your name, please\n> ");
    string surname = input("Enter your surname, please\n> ");

    string sum = name + surname;

    cout << sum << endl;

    system("read");
    return 0;
}