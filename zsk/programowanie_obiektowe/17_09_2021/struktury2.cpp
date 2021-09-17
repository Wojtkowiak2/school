#include <iostream>
#include <conio.h>
using namespace std;

struct Date {
    unsigned short int d, m, y;
};

class Worker {
    public:
        unsigned int id {};
        string name {}, surname {};
        Date birthdayDate {};

        void showAllData();
        void setData(unsigned int idSet, string nameSet, string surnameSet, Date birthdayDateSet = {});
};

void Worker::showAllData() {
    cout<<"Dane pracownika:"
        <<"\nID: "<<id
        <<"\nImiê: "<<name
        <<"\nNazwisko: "<<surname
        <<"\nData urodzenia: "<<birthdayDate.d<<"."<<birthdayDate.m<<"."<<birthdayDate.y;
}

void Worker::setData(unsigned int idSet, string nameSet, string surnameSet, Date birthdayDateSet) {
    id = idSet;
    name = nameSet;
    surname = surnameSet;
    birthdayDate = birthdayDateSet;
}

int main() {
    setlocale(LC_ALL, "");

    Worker kowalski;
    kowalski.setData(10, "Jerzy", "Sabiniewicz", {1, 2, 1945});
    kowalski.showAllData();
    
    getch();
    return 0;
}