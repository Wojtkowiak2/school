#include <iostream>
#include <conio.h>
using namespace std;

class Dog {
    public:
        string color;
        string eyeColor;
        float height;
        float length;
        float weight;

        void sit() {
            cout<<"Pies siedzi\n";
        }

        void layDown() {
            cout<<"Pies lezy\n";
        }

        void shake() {
            cout<<"Pies macha ogonem\n";
        }

        void come() {
            cout<<"Pies idzie\n";
        }
};

int main() {
    

    //getch();
    return 0;
}