#include <iostream>
#include <string>

using namespace std;

int getFibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return getFibonacci(n - 1) + getFibonacci(n - 2);

}

string input(string message) {
    cout << message;
    string temp;
    cin >> temp;
    return temp;
}

int main() {
    int n = stoi(input("Enter number of Fibonacci numbers to display\n> "));

    cout << getFibonacci(n);

    return 0;
}
