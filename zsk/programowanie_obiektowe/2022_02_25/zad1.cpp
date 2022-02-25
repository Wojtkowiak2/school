#include <iostream>
using namespace std;

class Character {
	public:
		string name;
		virtual void go() = 0;
		virtual void stop() = 0;
		virtual string showName() = 0;
};

class Human : public Character {
	public:
		void go() {
			cout<<"Czlowiek idzie\n";
		}
		
		void stop() {
			cout<<"Czlowiek zatrzymuje sie\n";
		}
		
		string showName() {
			return name;
		}
};

class Bear : public Character {
	public:
		void go() {
			cout<<"Niedzwiedz idzie\n";
		}
		
		void stop() {
			cout<<"Niedzwiedz zatrzymuje sie\n";
		}
		
		string showName() {
			return name;
		}
};

class Superhero : public Character {
	
};

int main() {
	//Character postac;
	//postac.go(); //Postac idzie
	
	Human czlowiek;
	czlowiek.go(); //Czlowiek idzie
	
	Character *wsk = &czlowiek;
	wsk->go(); //Postac idzie | przy virtual w Character: czlowiek idzie
	
	Bear niedzwiedz;
	wsk = &niedzwiedz;
	wsk->go();
	
	wsk = &czlowiek;
	wsk->name = "Janusz";
	cout<<wsk->showName();
	
	
	
	return 0;
}
