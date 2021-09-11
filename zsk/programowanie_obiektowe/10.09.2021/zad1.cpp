#include <iostream>

using namespace std;

class Rectangle{
	public:
		float length;
		float width;
		float area;
		float perimeter;
		
	void setArea();
	void setPerimeter();
	void showArea();
	void showPerimeter();
	void showAllData();
};

void Rectangle::setArea(){
	area = length*width;
}

void Rectangle::setPerimeter(){
	perimeter = (2*length)+(2*width);
}

void Rectangle::showArea(){
	cout<<"\nPole prostokata: "<<area;
}

void Rectangle::showPerimeter(){
    cout<<"\nObwod: "<<perimeter;
}

int main(){
	Rectangle firstRec;

	cout<<"Podaj dlugosc prostokata: ";
	cin>>firstRec.length;

	cout<<"Podaj szerokosc prostokata: ";
	cin>>firstRec.width;

	firstRec.setArea();
    firstRec.setPerimeter();

	firstRec.showArea();
    firstRec.showPerimeter();
	return 0;
}