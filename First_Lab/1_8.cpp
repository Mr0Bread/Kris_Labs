#include <iostream>

using namespace std;

float input(string message) {
    print << message;
    float temp;
    cin >> temp;
    return temp;
}

int main() {
    int result;

    int num = 0;

    while (true) {
        int tempNum = input("Enter whole number\n> ");

        if (tempNum != 0) {
            num += tempNum;
            cout << num << endl;
        } else {
            break;
        }
    }


    system("read");
    return 0;
}
