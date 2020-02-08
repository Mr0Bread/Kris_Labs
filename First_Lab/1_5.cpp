#include <iostream>
#include <iomanip>

using namespace std;

float input(string message) {
    cout << message;
    float temp;
    cin >> temp;
    return temp;
}

int main() {
    float number1 = input("Enter first real number\n> ");
    float number2 = input("Enter second real number\n> ");
    float number3 = input("Enter third real number\n> ");

    cout << std::setprecision(2) << fixed << (number1 + number2 + number3) / 3 << endl;

    system("read");
    return 0;
}

