//INICJALIZACJA OBIEKTOW

#include <iostream>
#include <conio.h>
using namespace std;

class Car {
    public:
        unsigned int id {1};
        string brand {"Fiat"};
        string model {"Multipla"};

        void getData();

        Car();
        Car(unsigned int pId, string pBrand, string pModel);
};

Car::Car() {
    id = 5;
    brand = "Citroen";
    model = "C4";
}

Car::Car(unsigned int pId, string pBrand, string pModel) {
    id = pId;
    brand = pBrand;
    model = pModel;
}

void Car::getData() {
    cout<<"ID: "<<id
    <<"\nBrand: "<<brand
    <<"\nModel: "<<model<<"\n\n";
}

int main() {
    setlocale(LC_CTYPE, "polish");

    Car fiat;
    fiat.getData();

    Car opel(10, "Opel", "Astra");
    opel.getData();

    //getch();
    return 0;
}