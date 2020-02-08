#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float input(string message) {
    cout << message;
    float temp;
    cin >> temp;
    return temp;
}

double returnTruncatedResult(double product) {
    return trunc(product);
}

double returnRoundedResult(double product) {
    return round(product);
}

int main() {
    float number1 = input("Enter first real number\n> ");
    float number2 = input("Enter second real number\n> ");
    bool answer = input("Enter 0 if you want rounded result and any other number, if you want truncated one\n> ");

    cout << number1 * number2 << endl;

    if (answer) {
        cout << returnTruncatedResult(number1 * number2) << " is Truncated result" << endl;
    } else {
        cout << returnRoundedResult(number1 * number2) << " is Rounded" << endl;
    }

    cout << "Enter any key to close program...";
    system("read");

    return 0;
}

