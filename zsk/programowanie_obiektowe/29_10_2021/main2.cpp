#include <iostream>

using namespace std;

class Rectangle {
	private:
		double sideA;
		double sideB;
	public:
		Rectangle();
		Rectangle(double pSideA, double pSideB);
		Rectangle(const Rectangle &);

		void catchSides(double&, double&);
		void setSides(double pSideA, double pSideB);
		void getSides();
		double area();
		double circuit();
};


Rectangle::Rectangle() {
	cout << "Konstruktor domyœlny" << endl;
}

Rectangle::Rectangle(double pSideA, double pSideB) {
	sideA = pSideA;	
	sideB = pSideB;
	cout << "Konstruktor parametryczny";
}

Rectangle::Rectangle(const Rectangle& model) {
	sideA = model.sideA;
	sideB = model.sideB;
	cout << "Konstruktor kopiuj¹cy";
}

void Rectangle::catchSides(double &pSideA, double &pSideB) {
	pSideA = sideA;
	pSideB = sideB;
}

void Rectangle::setSides(double pSideA, double pSideB) {
	sideA = pSideA;
	sideB = pSideB;
}

void Rectangle::getSides() {
	cout << "Bok a: " << sideA << "\nBok b: " << sideB << endl;
}

double Rectangle::area() {
	return sideA * sideB;
}

double Rectangle::circuit() {
	return (2 * sideA) + (2 * sideB);
}

Rectangle copyRectangle(Rectangle rectangle) {
	return rectangle;
}


int main() {
    setlocale(LC_CTYPE, "polish");
	double a,b;

	cout << "Pierwszy prostok¹t:\n";
	Rectangle p1(10,20);

	cout << "\na: " << a;
	cout << "\nb: " << b << endl;

	p1.getSides();
	p1.catchSides(a, b);
	cout << "\na: " << a;
	cout << "\nb: " << b << endl;



	cout << "\nDrugi prostok¹t:\n";
	Rectangle p2 = p1;

	cout << "\na: " << a;
	cout << "\nb: " << b << endl;

	p2.getSides();
	p2.catchSides(a, b);
	cout << "\na: " << a;
	cout << "\nb: " << b << endl;



	cout << "\nTrzeci prostok¹t:\n";
	Rectangle p3(p1);

	cout << "\na: " << a;
	cout << "\nb: " << b << endl;

	p3.getSides();
	p3.catchSides(a, b);
	cout << "\na: " << a;
	cout << "\nb: " << b << endl;



	cout << "\nCzwarty prostok¹t:\n";
	Rectangle p4;

	p4 = copyRectangle(p1);

	cout << "\na: " << a;
	cout << "\nb: " << b << endl;

	p4.getSides();
	p4.catchSides(a, b);
	cout << "\na: " << a;
	cout << "\nb: " << b << endl;

	return 0;
}