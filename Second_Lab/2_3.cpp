#include <iostream>
#include <string>

using namespace std;

string input(string message) {
    cout << message;
    string temp;
    cin >> temp;
    return temp;
}

int main() {
    string stringNumber = input("Enter number\n> ");

    int intNumber = stoi(stringNumber);
    cout << "Number after conversion to int: " << intNumber << endl;

    stringNumber = to_string(intNumber);
    cout << "Number after conversion to string: " << stringNumber << endl;

    system("read");
    return 0;
}


