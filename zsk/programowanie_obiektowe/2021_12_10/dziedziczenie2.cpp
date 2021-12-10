#include <iostream>
using namespace std;

class Vehicle {
    public:
        string brand;
        string model;
        float fuelAmount;
        float capacity;
        int numberOfSeats;

        void applyBrakes() {
            cout<<"apply breaks\n";
        }
};

class Bus : public Vehicle {
    public:
        int numberOfStandingPlaces;
};

class Car : public Vehicle {

};

class Truck : public Vehicle {
    public:
        bool semitrailer;
        int numberOfPallets;
};

int main() {
    Vehicle pojazd;
    Bus autobus;
    Car samochud;
    Truck ciezarowka;

    return 0;
}