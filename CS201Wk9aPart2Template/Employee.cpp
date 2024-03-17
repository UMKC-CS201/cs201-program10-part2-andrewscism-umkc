#include "Employee.h"

Employee::Employee() : Staff()
{
    type = 'E';
    vacationDays = 0;
    totalEmployees++;
}

Employee::Employee(char t, string l, string f, int a, int h, float hr, int v)
    : Staff(t, l, f, a, h, hr)
{
    type = 'E';
    vacationDays = v;
    totalEmployees++;
}

void Employee::print()
{
    cout << type << left << setw(4) << " "
         << setw(15) << lname
         << setw(15) << fname
         << setw(5) << right << age
         << setw(5) << hours
         << setw(5) << right << setprecision(2) << fixed << hourlyRate
         << setw(5) << vacationDays << endl;
}