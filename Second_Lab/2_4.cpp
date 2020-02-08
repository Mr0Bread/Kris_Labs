#include <iostream>
#include <string>

using namespace std;

string input(string message) {
    cout << message;
    std::string temp;
    cin >> temp;
    return temp;
}

int askMonthNum() {
    print << "Enter number of month from 1 to 12\n> ";
    int month;
    get >> month;

    if (month > 0 and month < 13) {
        return month;
    } else {
        print << "Invalid month value!" << newline;
    }
}

std::string getMonthName(int num) {
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
            print << "SOMETHING IS WRONG IN getMonthName function" << newline;
    }
}

int askDay(int monthNum) {
    print << "Enter day\n> ";
    int day;
    get >> day;

    int daysInMonths[12]{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (day > 0 and day < daysInMonths[monthNum - 1]) {
        return day;
    } else {
        print << "SOMETHING WRONG IN askDay function" << newline;
    }
}

int main() {
    int year = stoi(mine::input("Enter year\n> "));
    print << year << newline;

    int monthNum = mine::askMonthNum();
    std::string monthName = mine::getMonthName(monthNum);

    int day = mine::askDay(monthNum);
    std::string afterpos;

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

    print << day << afterpos << " " << monthName << " " << year << newline;


    system("read");
    return 0;
}
