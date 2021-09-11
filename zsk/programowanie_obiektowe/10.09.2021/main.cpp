#include <iostream>
#include <conio.h>
using namespace std;

class Worker
{
	//deklaracja zmiennych członkowskich (pola, cechy, właściwości)
	public:
		string name;
		string surname;
		short int birthYear;
		string nationality;
		float height;
		char gender;
	
	//definicja funkcji członkowskiej (metody)
	void showName(){
		cout<<"\nImie pracownika: "<<name;
	}
		
	//deklaracja funkcji członkowskiej (prototyp)
	void showSurname();
	void showNameSurname();
	void showAllData();
};

//definicja metody showSurname
void Worker::showSurname(){
	cout<<"\nNazwisko pracownika: "<<surname<<endl;
}

void Worker::showNameSurname(){
	cout<<"Imie i nazwisko pracownika: "<<name<<" "<<surname<<"\n";
}

void Worker::showAllData(){
	cout<<"\nDane pracownika:\n";
	showNameSurname();
	cout<<"Narodowosc: "<<nationality<<"\nRok urodzenia: "<<birthYear<<", Wzrost: "<<height<<" cm\nPlec: ";
	switch(gender){
		case 'm':
			cout<<"mezczyzna\n";
			break;
		case 'w':
			cout<<"kobieta\n";
			break;
		default:
			cout<<"-\n";
			break;
	}
}

int main(int argc, char** argv){
	Worker janusz;
	janusz.name = "Janusz";
	janusz.surname = "Nowak";
	janusz.birthYear = 1985;
	janusz.nationality = "Polak";
	janusz.height = 182;
	janusz.gender = 'm';
//	janusz.age=18;
//	cout<<janusz.name;
//	cout<<"\nImię i nazwisko: "<<janusz.name<<" "<<janusz.surname<<"\n\n";	
	janusz.showName();
	janusz.showSurname();
	janusz.showNameSurname();
	janusz.showAllData();

    getch();
	return 0;
}