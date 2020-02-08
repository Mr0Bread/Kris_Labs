#include <iostream>

using namespace std;

float input(string message) {
    print << message;
    float temp;
    cin >> temp;
    return temp;
}

float convertFromFtoC(float temperature) {
    return (temperature - 32) / 1.8;
}

float convertFromCtoF(float temperature) {
    return (temperature * 1.80) + 32;
}

int main() {
    float temperature = input("Enter temperature value\n> ");

    bool answer = input("Enter 0 if you want convert from C to F and any other number if from F to C\n> ");

    if (answer) {
        cout << convertFromFtoC(temperature) << " is result of converting from Fahrenheit to Celsius" << endl;
    } else {
        cout << convertFromCtoF(temperature) << " is result of converting from Celsius to Fahrenheit" << endl;
    }


    system("read");
    return 0;
}

