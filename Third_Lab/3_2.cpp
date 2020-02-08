#include <iostream>
#include <string>

using namespace std;

string input(string message) {
    cout << message;
    string temp;
    cin >> temp;
    return temp;
}

float getSquare1(const float number) {
    return number * number;
}

float getSquare2(const float *number) {
    return *number * *number;
}

int main() {
    float number = stof(input("Enter number to raise in square\n> "));
    float *numberPtr = &number;

    cout << getSquare1(number) << endl;
    cout << getSquare2(numberPtr) << endl;

    system("read");
    return 0;
}
