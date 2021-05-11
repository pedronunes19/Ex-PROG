#include "Date.hpp"
#include <iostream>
#include <ctime>

using namespace std;

Date::Date(){
    time_t t = time(0); 
    struct tm * timeStruct = localtime(&t);
    year = timeStruct->tm_year + 1900;
    month = timeStruct->tm_mon + 1;
    day =timeStruct->tm_mday;

}

Date::Date(unsigned int year, unsigned int month, unsigned int day){
    this -> year = year;
    this -> month = month;
    this -> day = day;
}

Date::Date(string yearMonthDay){
    year = stoi(yearMonthDay.substr(0, 4));
    month = stoi(yearMonthDay.substr(5, 2));
    day = stoi(yearMonthDay.substr(8, 2));
}

unsigned int Date::nDays(unsigned int year, unsigned int month) const{
    bool leap;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        leap = true;
    }
    else{
        leap = false;
    }
    if (month == 2){           // february
        if (leap)
            return 29;
        else
            return 28;
    }
    if (month <= 7){           // up to july
        if (month % 2 == 0)
            return 30;
        else
            return 31;
    }
    else{                      // august and forward
        if (month % 2 == 0)
            return 31;
        else
            return 30;
    }
}

void Date::setYear(unsigned int year){
    this -> year = year;
}

void Date::setMonth(unsigned int month){
    this -> month = month;
}

void Date::setDay(unsigned int day){
    this -> day = day;
}

void Date::setDate(unsigned int year, unsigned int month, unsigned int day){
    this -> year = year;
    this -> month = month;
    this -> day = day;
}

unsigned int Date::getYear() const{
    return year;
}

unsigned int Date::getMonth() const{
    return month;
}

unsigned int Date::getDay() const{
    return day;
}

string Date::getDate() const{
    return to_string(year) + "/" + to_string(month) + "/" + to_string(day);
}

void Date::show() const{
    cout << year << "/" << month << "/" << day << endl;
}

bool Date::isValid() const{
    if (day < 0 || day > nDays(year, month)){
        return false;
    }
    else if (month < 0 || month > 12){
        return false;
    }
    return true;
}

bool Date::isEqualTo(const Date &date) const{
    if (year != date.year || month != date.month || day != date.day){
        return false;
    }
    return true;
}

bool Date::isNotEqualTo(const Date &date) const{
    if (year == date.year && month == date.month && day == date.day){
        return false;
    }
    return true;
}

bool Date::isAfter(const Date &date) const{
    if (year < date.year){
        return false;
    }
    else if (month < date.month){
        return false;
    }
    else if (day <= date.day){
        return false;
    }
    else
        return true;
}

bool Date::isBefore(const Date &date) const{
    if (year > date.year){
        return false;
    }
    else if (month > date.month){
        return false;
    }
    else if (day >= date.day){
        return false;
    }
    else
        return true;
}