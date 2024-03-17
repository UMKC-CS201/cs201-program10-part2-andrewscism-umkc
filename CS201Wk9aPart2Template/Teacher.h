#pragma once

#include <string>
#include "Person.h"
#include "Staff.h"

using namespace std;

class Teacher : public Staff
{
private:
    string subject;

public:
    Teacher();
    Teacher(char t, string l, string f, int a, int y, float s, string sub);

    string getSubject() { return subject; }
    void setSubject(string s) { subject = s; }

    void print();
    static int totalTeachers;
};
