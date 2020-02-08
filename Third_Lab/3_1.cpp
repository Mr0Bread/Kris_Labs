#include <iostream>
#include <string>

using namespace std;

string input(string message) {
    cout << message;
    string temp;
    cin >> temp;
    return temp;
}

float getMaximum() {
    float number1 = stof(input("Enter first number\n> "));
    float number2 = stof(input("Enter second number\n> "));
    float number3 = stof(input("Enter third number\n> "));

    float numbers[3]{number1, number2, number3};

    for (int i = 0; i < 2; i++) {
        if (numbers[i] < numbers[i + 1]) {
            swap(numbers[i], numbers[i + 1]);
            i = -1;
        }
    }

    return numbers[0];
}

int main() {
    cout << getMaximum() << endl;

    system("read");
    return 0;
}