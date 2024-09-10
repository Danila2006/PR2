#include "age.h"
#include <sstream>

string  calculateAge(int currentYear, int currentMonth, int currentDay, int birthYear, int birthMonth, int birthDay) {
    int daysInYear = 365;
    int ageYears = currentYear - birthYear;

    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
        ageYears--;
    }

    int ageDays = ageYears * daysInYear;

    ostringstream oss;
    oss << "You're " << ageYears << " years and, " << ageDays << " days old";

    return oss.str();
}