#include <iostream>
#include <conio.h>
using namespace std;

struct Date {
    unsigned short int d, m, y;
};

class Worker {
    public:
        unsigned int id;
        string name;
        string surname;
        Date birthdayDate {1, 1, 2000};

        void getData();

        Worker() {
            id = 1;
            name = "Janusz";
            surname = "Nowak";
            birthdayDate = {1, 1, 2000};
        };

        Worker(int, string, string, Date);
        Worker(int, string, string);
        Worker(int);
};

Worker::Worker(int pId, string pName, string pSurname, Date pBirthdayDate) {
    id = pId;
    name = pName;
    surname = pSurname;
    birthdayDate = pBirthdayDate;
}

Worker::Worker(int pId, string pName, string pSurname) {
    id = pId;
    name = pName;
    surname = pSurname;
}

Worker::Worker(int pId) {
    id = pId;
}

void Worker::getData() {
    cout<<"ID: "<<Worker::id
    <<"\nImiê i nazwisko: "<<Worker::name<<" "<<Worker::surname
    <<"\nData urodzenia: "<<Worker::birthdayDate.d<<"."<<Worker::birthdayDate.m<<"."<<Worker::birthdayDate.y;
}

int main() {
    setlocale(LC_CTYPE, "polish");
    //Worker nowak(20, "Wojciech", "Kowalski", {5, 6, 2006});
    Worker nowak(45);
    Worker kowalski(12, "Jakub", "Kowalski");

    Worker *wsk;
    wsk = &nowak;
    //cout<<wsk->name;

    wsk->getData();

    //getch();
    return 0;
}