#include <iostream>

using namespace std;

float input(string message) {
    print << message;
    float temp;
    cin >> temp;
    return temp;
}

int main() {
    float length = input("Enter length of rectangular\n> ");
    float width = input("Enter width of rectangular\n> ");

    cout << "The area of rectangular is equal to " << length * width << endl;
    cout << "The perimeter of rectangular is equal to " << (length * 2) + (width * 2) << endl;

    system("read");
    return 0;
}
