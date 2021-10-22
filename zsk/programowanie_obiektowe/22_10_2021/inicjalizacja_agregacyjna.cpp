//INICJALIZACJA AGREGACYJNA

#include <iostream>
#include <conio.h>
using namespace std;

class Car {
    public:
        unsigned int id;
        string brand;
        string model;

        void getData();

        Car();
        Car(unsigned int pId, string pBrand, string pModel);
};

Car::Car() {
    id = 0;
    brand = "Marka domyslna";
    model = "Model domyslny";
    cout<<"Konstruktor domyslny\n";
}

Car::Car(unsigned int pId, string pBrand, string pModel) {
    id = pId;
    brand = pBrand;
    model = pModel;
    cout<<"Konstruktor parametryczny\n";
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

    Car opel {1, "Ferrari", "F460"};
    opel.getData();


    //getch();
    return 0;
}