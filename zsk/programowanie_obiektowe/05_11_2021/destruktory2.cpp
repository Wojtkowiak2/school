#include <iostream>
using namespace std;

class Worker {
    public:
        string name, surname;
        static int objectsAmount;

        Worker();
        Worker(string pName, string pSurname);
        void getData();

        ~Worker(){ //destruktor
            cout<<"Wywolanie destruktora\n";
            objectsAmount--;
            cout<<"Liczba objektow: "<<objectsAmount<<"\n\n";
        }
};

int Worker::objectsAmount = 0;

Worker::Worker() {
    cout<<"Konstruktor domyslny\n";
    objectsAmount++;
    cout<<"Liczba objektow: "<<objectsAmount<<"\n\n";
}

Worker::Worker(string pName, string pSurname):
    name {pName},
    surname {pSurname}
{
    cout<<"Konstruktor parametryczny\n";
    objectsAmount++;
    cout<<"Liczba objektow: "<<objectsAmount<<"\n\n";
}

void Worker::getData() {
    cout<<"Imie i nazwisko: "<<name<<" "<<surname<<"\n\n";
}

int main()
{
    cout<<"Liczba objektow: "<<Worker::objectsAmount<<"\n\n";
    Worker kowalski;

    Worker nowak("Marek", "Nowak");

    Worker *sabiniewicz = new Worker("Jerzy", "Sabiniewicz");

    return 0;
}