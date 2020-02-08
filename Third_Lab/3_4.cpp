#include <iostream>
#include <string>

using namespace std;

string input(string message) {
    cout << message;
    string temp;
    cin >> temp;
    return temp;
}

int countFact(int n) {
    if (n == 1)
        return 1;
    else {
        return n * countFact(n - 1);
    }
}

int main() {
    int n = stoi(input("Enter which factorial you want to get\n> "));

    cout << countFact(n);

    return 0;
}
