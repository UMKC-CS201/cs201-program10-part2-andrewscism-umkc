#include "Teacher.h"

Teacher::Teacher() : Staff()
{
    type = 'T';
    subject = "Unknown";
    totalTeachers++;
}

Teacher::Teacher(char t, string l, string f, int a, int y, float s, string sub)
    : Staff(t, l, f, a, y, s)
{
    type = 'T';
    subject = sub;
    totalTeachers++;
}

void Teacher::print()
{
    cout << type << left << setw(4) << " "
         << setw(15) << lname
         << setw(15) << fname
         << setw(5) << right << age
         << setw(5) << hours
         << setw(13) << hourlyRate
         << setw(15) << subject << endl;
}