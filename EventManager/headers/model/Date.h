// Date.h
#ifndef DATE_H
#define DATE_H

#include <string>

class Date{
private:
    int day;
    int month; // 1- january, ... 12- December
    int year;
    bool isLeapYear(int year);
    bool isValid(int day, int month, int year);
public:
    Date();
    Date(int day, int month, int year);
    Date(const Date & date);
    void setDate(int day, int month, int year);
    void getDate(int& day, int& month, int& year) const;
    bool operator == (const Date& obj) const;
    bool operator > (const Date& obj)const;
    bool operator < (const Date& obj) const;
};

#endif //DATE_H

