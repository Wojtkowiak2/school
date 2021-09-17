#include <iostream>
#include <conio.h>
using namespace std;

struct Date {
    unsigned short int d, m, y;
};

struct Student {
    string name, surname;
    unsigned int id;
    Date birthdayDate;
    unsigned short int gradeInformation[5];
};

int main()
{
    Student kowalski {"Jerzy", "Sabiniewicz", 400, {1, 01, 1945}, {5, 6, 4, 4, 3}};
    

    cout<<"Dane pracownika:\n";
    cout<<"Imie: "<<kowalski.name;
    cout<<"\nNazwisko: "<<kowalski.surname;
    cout<<"\nID: "<<kowalski.id;
    cout<<"\nData urodzenia: "<<kowalski.birthdayDate.d<<"."<<kowalski.birthdayDate.m<<"."<<kowalski.birthdayDate.y;
    cout<<"\nOceny z informatyki:\n";
    for(int i=0; i<5; i++)
    {
        cout<<i+1<<" ocena: "<<kowalski.gradeInformation[i]<<"\n";
    }

    //getch();
    return 0;
}