#pragma once

#include "Person.h"

class Staff : public Person
{
protected:
   int hours;
   float hourlyRate;

public:
   Staff() : Person()
   {
      hours = 0;
      hourlyRate = 0.0;
      totalStaff++;
   }

   Staff(char t, string l, string f, int a, int h, float hr)
       : Person(l, f, a)
   {
      type = ' ';
      hours = h;
      hourlyRate = hr;
      totalStaff++;
   }
   int getHours() { return hours; }
   float getHourlyRate() { return hourlyRate; }
   void setHours(int h) { hours = h; }
   void setHourlyRate(float hr) { hourlyRate = hr; }

   void print()
   {
      cout << type << left << setw(4) << " "
           << setw(15) << lname
           << setw(15) << fname
           << setw(5) << right << age
           << setw(10) << " "
           << hours << ", " << hourlyRate << endl;
   }
   static int totalStaff;
};