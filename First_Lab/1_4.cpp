#include <iostream>

using namespace std;

float input(string message) {
    print << message;
    float temp;
    cin >> temp;
    return temp;
}

int main() {
    int number1 = input("Enter first integer number\n> ");
    int number2 = input("Enter second integer number\n> ");

    cout << number1 << " / " << number2 << " = " << number1 / number2 << " remainder " << number1 % number2 << endl;

    system("read");
    return 0;
}

