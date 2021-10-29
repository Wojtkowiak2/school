#include <iostream>
#include <conio.h>
using namespace std;

class Car {
    unsigned int id;

    public:
        string brand;
        string model;

        void getData();

        Car();
        Car(string pBrand);
        Car(unsigned int pId, string pBrand, string pModel);
};

void Car::getData() {
    cout<<"Id: "<<id<<"\nMarka i model: "<<brand<<" "<<model<<"\n\n";
}

Car::Car(): //lista inicjalizacyjna
    id {0},
    brand {"MARKA"},
    model {"MODEL"}
{
    cout<<"Konstruktor domyslny\n";
}

Car::Car(unsigned int pId, string pBrand, string pModel):
    id {pId},
    brand {pBrand},
    model {pModel}
{
    cout<<"Konstruktor parametryczny\n";
}

int main()
{
    Car fiat;
    fiat.getData();

    Car fiat2 = Car(2, "Fiat", "Multipla");
    fiat2.getData();

    Car fiat3 = Car(3, "Fiat", "Panda");
    fiat3.getData();

    //getch();
    return 0;
}