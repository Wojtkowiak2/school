#include <iostream>
using namespace std;

class Worker {
    public:
        string name, surname;

        Worker();
        Worker(string pName, string pSurname);
        void getData();

        ~Worker(){ //destruktor
            cout<<"Wywolanie destruktora\n\n";
        }
};

Worker::Worker() {
    cout<<"Konstruktor domyslny\n\n";
}

Worker::Worker(string pName, string pSurname):
    name {pName},
    surname {pSurname}
{
    cout<<"Konstruktor parametryczny\n\n";
}

void Worker::getData() {
    cout<<"Imie i nazwisko: "<<name<<" "<<surname<<"\n\n";
}

void createObjectWorker() {
    Worker worker;
    worker.getData();
    cout<<"Wywolanie funkcji createObjectWorker\n\n";
}

void createObjectWorker2(string pName, string pSurname) {
    Worker worker(pName, pSurname);
    worker.getData();
    cout<<"Wywolanie funkcji createObjectWorker2\n\n";
}

int main() {
    Worker kowalski = Worker("Janusz", "Kowalski");
    kowalski.getData();

    cout<<"Wskaznik\n\n";
    Worker *p_kowalski = new Worker("Jan", "Kowalski");

    delete p_kowalski;

    createObjectWorker2("Aleksander", "Poniatowski");

    return 0;
}