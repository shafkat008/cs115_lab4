// Name:Shafkat Alam
// Student Number:200443237
// Date:21/09/2021

#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <cassert>
using namespace std;

class Date
{
  private:
    int month, day, year;

  public:

    //default constructor
    Date();

    //constructor with 3 arguements
    Date(int m, int d, int y);


    int getMonth() const;
    int getDay() const;
    int getYear() const;
    void setMonth(int m);
    void setDay(int d);
    void setYear(int y);

    //printDate
    void printDate() const;

    //sameDay
    bool sameDay(const Date &d) const;
    
};


#endif
