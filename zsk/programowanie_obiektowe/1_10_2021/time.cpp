#include <iostream>
#include <conio.h>
using namespace std;

struct Date {
    unsigned short int day, month, year;
};

struct Time {
    unsigned short int hour, minute, second;
};

class dateTime {
    public:
        static Date date;
        static Time time;

        static void showDate();
        static void showTime();
        static void showDateTime();

        static void setDate(unsigned short int day, unsigned short int month, unsigned short int year);
};

void dateTime::showDate() {
    cout<<"Date: "<<dateTime::date.day<<"."<<dateTime::date.month<<"."<<dateTime::date.year;
}

void dateTime::showTime() {
    cout<<"Time: "<<dateTime::time.hour<<"."<<dateTime::time.minute<<"."<<dateTime::time.second;
}

void dateTime::showDateTime() {
    cout<<"Date: "<<dateTime::date.day<<"."<<dateTime::date.month<<"."<<dateTime::date.year<<endl;
    cout<<"Time: "<<dateTime::time.hour<<"."<<dateTime::time.minute<<"."<<dateTime::time.second;
}

void dateTime::setDate(unsigned short int day, unsigned short int month, unsigned short int year) {
    dateTime::date.day = day;
    dateTime::date.month = month;
    dateTime::date.year = year;
}

int main() {
    dateTime::setDate(14, 11, 2021);
    dateTime::showDate();
    
    //getch();
    return 0;
}