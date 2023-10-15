#include<iostream>

using namespace std;

class Employee {
    public:
        float salary;
        virtual void calculateSalary()=0;
};

class Manager: public Employee {
    public:
        Manager() {
            salary=25000;
        }
        void calculateSalary() {
            cout << "Manager's salary is: " << salary << endl;
        }
};

class Engineer: public Employee {
    public:
        Engineer() {
            salary=20000;
        }

        void calculateSalary(){
            cout << "Engineer's salary is: " << salary << endl;
        }
};

class Salesperson: public Employee {
    public:
        Salesperson() {
            salary = 15000;
        }

        void calculateSalary() {
            cout << "Salesperson salary is: " << salary << endl;
        }
};

int main(){

    Manager m1;
    Engineer e1;
    Salesperson s1;

    s1.calculateSalary();
    e1.calculateSalary();
    s1.calculateSalary();


    return 0;
}