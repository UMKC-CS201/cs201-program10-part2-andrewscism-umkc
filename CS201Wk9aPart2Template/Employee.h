#pragma once

#include <string>
#include "Person.h"
#include "Staff.h"

using namespace std;

class Employee : public Staff
{
private:
    int vacationDays;

public:
    Employee();
    Employee(char t, string l, string f, int a, int h, float hr, int v);

    int getVacationDays() { return vacationDays; }
    void setVacationDays(int v) { vacationDays = v; }

    void print();
    static int totalEmployees;
};
