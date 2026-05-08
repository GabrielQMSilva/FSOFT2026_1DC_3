#ifndef HEADERS_MODEL_DATE_H_
#define HEADERS_MODEL_DATE_H_

class Date{
private:
    int day;
    int month; // 1- january, ... 12- December
    int year;
    int hour;
    int minute;
    bool isLeapYear(int year);
    bool isValid(int year, int month, int day, int hour, int minute);
public:
    Date();
    Date(int year, int month, int day, int hour, int minute);
    Date(const Date & date);

    void setDate(int year, int month, int day,int hour,int minute );
    void getDate(int &year, int &month, int &day,int &hour,int &minute) const;
    bool operator == (const Date& obj) const;
    bool operator > (const Date& obj)const;
    bool operator < (const Date& obj) const;
};

#endif /* HEADERS_MODEL_DATE_H_ */

