#include "Date.h"

Date::Date(int dayIn, int monthIn, int yearIn){
    validate(dayIn, monthIn, yearIn);
          
    day = dayIn;
    month = monthIn;
    year = yearIn;  
    
}

Date::~Date(){
    
}

void Date::validate(int day, int month, int year){
    bool leapYear = false;
    
    if ( year < 1 || month < 1 || day < 1 ){
        throw InvalidDate ("Дата введена неверно!");
    }
    if ( month > 12 || day > 31) {
        throw InvalidDate ("Дата введена неверно!");
    }
    if ( year % 400 == 0 ){
        leapYear = true;
    }
    else if ( year % 100 == 0) {
        leapYear = false;
    }
    else if ( year % 4 == 0) {
        leapYear = true;
    }
    else {
        leapYear = false;
    }
    
    if (month == 1 ){
        if (day > 31){
            throw InvalidDate ("Дата введена неверно!");
        }
    }
    if (month == 2 && leapYear == false ){
        if (day > 28){
            throw InvalidDate ("Дата введена неверно!");
        }
    }
    else if (month == 2 && leapYear == true ){
        if (day > 29){
            throw InvalidDate ("Дата введена неверно!");
        }
    }
    if (month == 3){
        if (day > 31){
            throw InvalidDate ("Дата введена неверно!");
        }
    }
    if (month == 4){
        if (day > 30){
            throw InvalidDate ("Дата введена неверно!");
        }
    }
    if (month == 5 ){
        if (day > 31){
            throw InvalidDate ("Дата введена неверно!");
        }
    }
    if (month == 6 ){
        if (day > 30){
            throw InvalidDate ("Дата введена неверно!");
        }
    }
    if (month == 7 ){
        if (day > 31){
            throw InvalidDate ("Дата введена неверно!");
        }
    }
    if ( month == 8 ){
        if (day > 31){
            throw InvalidDate ("Дата введена неверно!");
        }
    }
    if ( month == 9 ){
        if (day > 30){
            throw InvalidDate ("Дата введена неверно!");
        }
    }
    if ( month == 10 ){
        if (day > 31){
            throw InvalidDate ("Дата введена неверно!");
        }
    }
    if ( month == 11 ){
        if (day > 30){
            throw InvalidDate ("Дата введена неверно!");
        }
    }
    if ( month == 12 ){
        if (day > 31){
            throw InvalidDate ("Дата введена неверно!");
        }
    }
    
}

int Date::getDay() const{
    return day;
    
}

int Date::getMonth() const{
    return month;
    
}

int Date::getYear() const{
    return year;
    
}

std::ostream& operator<<(std::ostream& out, const Date& date){
    out << date.getDay() << "." << date.getMonth() << "." << date.getYear() << std::endl;
}