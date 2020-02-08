#include <iostream>

using namespace std;

float input(string message) {
    print << message;
    float temp;
    cin >> temp;
    return temp;
}

int main() {
    int age = input("Enter your age\n> ");

    if (age >= 18) {
        cout << "You are able to apply for driving license\n";
    } else if (age < 0) {
        cout << "You entered negative number\n";
    } else {
        cout << "You aren't able to apply for driving license\nYou need to wait " << 18 - age << " years\n";
    }


    system("read");
    return 0;
}
