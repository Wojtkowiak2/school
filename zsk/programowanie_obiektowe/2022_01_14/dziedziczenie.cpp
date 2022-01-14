#include <iostream>
using namespace std;

class Worker {
    private:
        string name;
        string surname;

    public:
        void setName(string pName) {
            name = pName;
        }

        void setSurname(string pSurname) {
            surname = pSurname;
        }
        
        string getName() {
            return name;
        }

        string pSurname() {
            return surname;
        }

        string getData() {
            return name + " " + surname;
        }
};

class Teacher : public Worker {
    private:
        string schoolSubject {""};

    public:
        void setSchoolSubject(string pSchoolSubject) {
            schoolSubject = pSchoolSubject;
        }

        string getSchoolSubject() {
            return schoolSubject;
        }
};

class Supervisor : public Teacher {
    private:
        string schoolClass {""};

    public:
        void setSchoolClass(string pSchoolClass) {
            schoolClass = pSchoolClass;
        }

        string getSchoolClass() {
            return schoolClass;
        }
};

int main() {
    setlocale(LC_CTYPE, "polish");

    Worker pracownik;
    pracownik.setName("Jan");
    pracownik.setSurname("Kowalski");
    cout<<pracownik.getData()<<"\n";

    Teacher nauczyciel;
    nauczyciel.setName("Darek");
    nauczyciel.setSurname("Urban");
    nauczyciel.setSchoolSubject("podstawy przedsiebiorczosci");
    cout<<nauczyciel.getData()<<" "<<nauczyciel.getSchoolSubject()<<"\n";

    Supervisor wychowawca;
    wychowawca.setName("Dorota");
    wychowawca.setSurname("Nowak");
    wychowawca.setSchoolClass("2D");
    cout<<wychowawca.getData()<<" "<<wychowawca.getSchoolClass();


    return 0;
}