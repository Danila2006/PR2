#include <iostream>
#include <ctime>
#include "age.h"

int main() {
    int birthYear, birthMonth, birthDay, currentYear, currentMonth, currentDay;

    cout << "Enter your birth year: ";
    cin >> birthYear;
    cout << "Enter your birth month (1-12): ";
    cin >> birthMonth;
    cout << "Enter your birth day (1-31): ";
    cin >> birthDay;

    cout << "Enter current year: ";
    cin >> currentYear;
    cout << "Enter current month (1-12): ";
    cin >> currentMonth;
    cout << "Enter current day (1-31): ";
    cin >> currentDay;

    cout << calculateAge(currentYear, currentMonth, currentDay, birthYear, birthMonth, birthDay);
}
