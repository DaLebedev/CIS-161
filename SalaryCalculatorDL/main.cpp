/**
 * Author: Daniel Lebedev - dalebedev
 * CIS 161 - Spring 2024
 * Description: The purpose of this program is to fix the
 * error in the original provided code.
 */

#include <iostream>
using namespace std;

int main() {

    // Changed the necessary variables to float instead of int.
    int workHoursPerWeek;
    float hourlyWage;
    float weeklySalary;
    float annualSalary;

    // Created constaant to replace magic number.
    const int WEEKS_IN_YEAR = 52;

    cout << "How many hours do you work per week?" << endl;
    cin >> workHoursPerWeek;

    cout << "What is your hourly wage?" << endl;
    cin >> hourlyWage;

    weeklySalary = hourlyWage * workHoursPerWeek;
    cout << "Weekly salary is: ";
    cout << fixed;
    cout.precision(2);
    cout << weeklySalary << endl;

    // Replaced magic number with new constant.
    annualSalary = weeklySalary * WEEKS_IN_YEAR;
    cout << "Annual salary is: ";
    cout << fixed;
    cout.precision(2);
    cout << annualSalary << endl;

    return 0;
}
