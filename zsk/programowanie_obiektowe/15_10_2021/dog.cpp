#include <iostream>
#include <conio.h>
using namespace std;

class Dog {
    public:
        string color {"brown"};
        string eyeColor {"green"};
        float height {1};
        float length {1};
        float weight {1};

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

        void metoda();

        Dog() {

        }
        
        Dog(string color);
        Dog(string color, string eyeColor);
        Dog(float height, float length, float weight);
        Dog(string color, string eyeColor, float height, float length, float weight);
};

Dog::Dog(string pColor) {
    color = pColor;
}

Dog::Dog(string pColor, string pEyeColor) {
    color = pColor;
    eyeColor = pEyeColor;
}

Dog::Dog(float pHeight, float pLength, float pWeight) {
    height = pHeight;
    length = pLength;
    weight = pWeight;
}

Dog::Dog(string pColor, string pEyeColor, float pHeight, float pLength, float pWeight) {
    color = pColor;
    eyeColor = pEyeColor;
    height = pHeight;
    length = pLength;
    weight = pWeight;
}

int main() {
    setlocale(LC_CTYPE, "polish");
    //Dog bobo("red", "blue", 145.1, 456, 52.54);
    Dog bobo("hotpink");
    cout<<bobo.color<<endl;
    cout<<bobo.eyeColor<<endl;
    cout<<bobo.height<<endl;
    cout<<bobo.length<<endl;
    cout<<bobo.weight<<endl;

    bobo.shake();

    //getch();
    return 0;
}