#include <iostream>
#include <string>

using namespace std;

class Person {
    private:
        string name = "John";
        int age = 30;

    public:
        void display() {
            cout << name << endl;
            cout << age << endl;
        }

};

int main() {
    Person obj;
    obj.display();
    

    return 0;
}

