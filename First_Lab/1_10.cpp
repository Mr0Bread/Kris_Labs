#include <iostream>

using namespace std;

float PI = 3.14159

float input(string message) {
    print << message;
    float temp;
    cin >> temp;
    return temp;
}

void printArea(float radius) {
    cout << PI * (radius * radius) << endl;
}

void printCircumference(float radius) {
    cout << 2 * PI * radius << cout;
}

int main() {
    float radius = mine::input("Enter radius of a circle\n> ");

    printArea(radius);
    printCircumference(radius);

    system("read");
    return 0;
}
