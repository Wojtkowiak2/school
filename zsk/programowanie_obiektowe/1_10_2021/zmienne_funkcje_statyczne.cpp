#include <iostream>
#include <conio.h>
using namespace std;

class School {
    public:
        static string s_school;
        static string s_jobPosition;

        string name;
        string surname;

        void showData();
        void setData(string pName, string pSurname, string s_school);

        static string s_getSchool();
        static void s_getSchool(string pSchool);
};

string School::s_school = "ZSK";
string School::s_jobPosition = "student";

void School::showData(){
    cout<<"Imie i nazwisko: "<<name<<" "<<surname<<endl;
    cout<<"Szkola: "<<s_school<<endl;
    cout<<"Stanowisko: "<<s_jobPosition<<endl;
}

void School::setData(string pName, string pSurname, string s_school){
    name = pName;
    surname = pSurname;
    School::s_school = s_school;
}

void School::s_getSchool(string pSchool){
    School::s_school = pSchool;
}

int main() {
    setlocale(LC_ALL, "");

    cout<<"s_school: "<<School::s_school<<endl;
    cout<<"s_jobPosition: "<<School::s_jobPosition<<endl;

    School kowalski;
    kowalski.setData("Jan", "Kowalski", "ZSL");
    kowalski.showData();

    cout<<"s_school: "<<School::s_school<<endl;

    School::s_getSchool("LO8");
    cout<<kowalski.s_school<<endl;

    //getch();
    return 0;
}