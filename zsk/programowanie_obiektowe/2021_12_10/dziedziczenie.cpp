#include <iostream>
using namespace std;

//klasa bazowa (rodzic)
class Animal {
    private:
        bool vaccination;

    public:
        string name, breed;
        float weight, height;

        void publicFuncAnimal() {
            cout<<"Funckja publiczna klasy animal.\n";
        }

        void setVaccination(bool pVaccination) {
            vaccination = pVaccination;
        }

        bool getVaccination() {
            return vaccination;
        }

        void funcAnimal() {
            cout<<"Funkcja Animal\n";
        }
};

//klasa dziedzicząca
class Dog : public Animal  {
    public:
        void fetch() {
            cout<<"Burek aport!\n";
        }

        void funcAnimal() {
            cout<<"Funkcja Animal w klasie Dog\n";
        }
};

int main() {
    Animal zwierze;
    zwierze.publicFuncAnimal();

    Dog burek;
    burek.publicFuncAnimal();
    burek.funcAnimal();
    burek.setVaccination(true);

    cout<<"Czy zwierze jest szczepione: "<<burek.getVaccination()<<endl;

    return 0;
}