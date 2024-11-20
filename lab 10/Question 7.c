#include <stdio.h>

// Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Function to check if a given year is a leap year
int isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

// Function to check if a date is valid
int isValidDate(struct Date date) {
    if (date.month < 1 || date.month > 12) {
        return 0; // Invalid month
    }
    // Check if the day is valid for the given month
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    // February in leap years has 29 days
    if (isLeapYear(date.year)) {
        daysInMonth[1] = 29;
    }

    // Check if the day is within the valid range for the month
    if (date.day < 1 || date.day > daysInMonth[date.month - 1]) {
        return 0; // Invalid day
    }
    return 1; // Valid date
}

// Function to calculate the number of days in a year up to the given date
int daysInYearUpTo(struct Date date) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays = 0;

    // Adjust February for leap years
    if (isLeapYear(date.year)) {
        daysInMonth[1] = 29;
    }
    // Add the days in the months before the given month
    for (int i = 0; i < date.month - 1; i++) {
        totalDays += daysInMonth[i];
    }
    // Add the days in the current month
    totalDays += date.day;

    return totalDays;
}
