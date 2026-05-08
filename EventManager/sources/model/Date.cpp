#include <string>
#include "Date.h"
#include <iostream>
using namespace std;

bool Date:: isLeapYear(int year){

	if (year % 400 == 0)
		return true;

	if (year % 100 == 0)
		return false;

	if (year % 4 == 0)
		return true;
	return false;


}
bool Date::isValid(int year, int month, int day,int hour,int minute){
	bool result = true;
	if (minute < 0 && minute > 59) {
		result = false;
	}
	if (  hour < 0 && hour > 23 ) {
		result = false;
	}
	if(day <= 0 || day > 31 || month <= 0 || month > 12){
		result = false;
	}
	else{
		switch(month){
		case 2:
			if(isLeapYear(year) == true){
				if(day > 29){
					result = false;
				}
			}else{
				if(day > 28){
					result = false;
				}
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(day > 30){
				result = false;
			}
			break;
		}
	}
	return result;
}

Date::Date(){
	//default date
	setDate(1,1, 1900,0,0);
}
Date::Date(int year, int month, int day,int hour,int minute){
	setDate(year,month,day,hour,minute);
}
Date::Date(const Date& date){
	setDate(date.year, date.month, date.day,date.hour,date.minute);
}
void Date::setDate(int year, int month, int day,int hour, int minute){
	if(isValid(year,month,day,hour,minute)){
			this->day = day;
			this->month = month;
			this->year = year;
			this->hour = hour;
			this->minute = minute;
		}
	/*   -- INVALID DATA EXCEPTION PLACE HOLDER --
	else{
		string msg =to_string(day)+ "/"+to_string(month)+"/"+to_string(year);
		throw InvalidDataException(msg);
	} */
}
void Date::getDate(int& year, int& month, int& day,int& hour,int& minute) const{
	day = this->day;
	month = this->month;
	year = this->year;
	hour = this->hour;
	minute = this->minute;
}
bool Date::operator == (const Date& obj) const{
	if(this->day == obj.day && this->month == obj.month && this->year == obj.year && this->hour == obj.hour && this->minute == obj.minute){
		return true;
	}
	return false;
}
bool Date::operator > (const Date& obj)const {
	if(this->year > obj.year) {
		if(this->month > obj.month){
			if(this->day > obj.day) {
				if(this->hour > obj.hour){
					return true;
				}
				if(this->minute > obj.minute){
					return true;
				}
				return true;
			}
			return true;
		}
		return true;
	}
	if(this->month > obj.month){
		if(this->day > obj.day) {
			if(this->hour > obj.hour){
				return true;
			}
			if(this->minute > obj.minute){
				return true;
			}
			return true;
		}
		return true;
	}
	if(this->day > obj.day){
		if(this->hour > obj.hour){
			return true;
		}
		if(this->minute > obj.minute){
			return true;
		}
		return true;
	}
	if(this->hour > obj.hour){
		if(this->minute > obj.minute){
			return true;
		}
		return true;
	}
	if(this->minute > obj.minute){
		return true;
	}
	return false;
}
bool Date::operator < (const Date& obj)const{
	if(*this == obj){
		return false;
	}

	if(*this > obj){
		return false;
	}
	return true;
}
//
// Created by josej on 5/7/2026.
//