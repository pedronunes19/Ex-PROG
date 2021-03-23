#include <iostream>
using namespace std;

bool leapYear(int year){
    if(year % 400 == 0)
        return true;
    else if (year % 4 == 0 && year % 100 != 0)
        return true;
    else 
        return false;
}

int nDays(int month, int year){
    if (month == 2){
        if (leapYear(year))
            return 29;
        else
            return 28;
    }
    if (month <= 7){
        if (month % 2 == 0)
            return 30;
        else
            return 31;
    }
    else{
        if (month % 2 == 0)
            return 31;
        else
            return 30;
    }
    
}

int main() {
    int year, month;
    cout << "month and year: ";
    cin >> month >> year;
    cout << nDays(month, year);
    
    
    return 0;
}