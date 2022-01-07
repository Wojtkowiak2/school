#include <iostream>
#include <conio.h>
using namespace std;

struct Date {
    unsigned short int d, m, y;
};

class Person {
    public:
        string name;
        string surname;
        Date birthday;
        unsigned short int age;
};

class Worker : public Person {
    public:
        bool exam;
        float salary;

        float getSalary() {
            return salary;
        }
};

class Student : public Person {
    public:
        int id;
        int scholarship;

        int getScholarship() {
            return scholarship;
        }
};

class Pensioner : public Person {
    float pension;

    float getPension() {
        return pension;
    }
};

int main() {
    Worker kowalski;
    Student rewers;
    Pensioner xiega;


    getch();
    return 0;
}