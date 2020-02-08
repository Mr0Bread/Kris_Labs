#include <iostream>
#include <string>

using namespace std;

string input(string message) {
    cout << message;
    string temp;
    cin >> temp;
    return temp;
}

int askMonthNum() {
    cout << "Enter number of month from 1 to 12\n> ";
    int month;
    cin >> month;

    if (month > 0 and month < 13) {
        return month;
    } else {
        cout << "Invalid month value!" << endl;
    }
}

string getMonthName(int num) {
    switch (num) {
        case 1:
            return "January";
        case 2:
            return "February";
        case 3:
            return "March";
        case 4:
            return "April";
        case 5:
            return "May";
        case 6:
            return "June";
        case 7:
            return "July";
        case 8:
            return "August";
        case 9:
            return "September";
        case 10:
            return "October";
        case 11:
            return "November";
        case 12:
            return "December";
        default:
            cout << "SOMETHING IS WRONG IN getMonthName function" << endl;
    }
}

int askDay(int monthNum) {
    cout << "Enter day\n> ";
    int day;
    cin >> day;

    int daysInMonths[12]{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (day > 0 and day < daysInMonths[monthNum - 1]) {
        return day;
    } else {
        cout << "SOMETHING WRONG IN askDay function" << endl;
    }
}

int main() {
    int year = stoi(mine::input("Enter year\n> "));
    cout << year << endl;

    int monthNum = mine::askMonthNum();
    string monthName = getMonthName(monthNum);

    int day = askDay(monthNum);
    string afterpos;

    switch (day) {
        case 1:
            afterpos = "st";
            break;
        case 2:
            afterpos = "nd";
            break;
        case 3:
            afterpos = "rd";
            break;
        default:
            afterpos = "th";
            break;
    }

    cout << day << afterpos << " " << monthName << " " << year << endl;


    system("read");
    return 0;
}
