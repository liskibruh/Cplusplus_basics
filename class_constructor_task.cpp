#include <iostream>
#include <string>

using namespace std;

class Person {
    public:
        string name;
        int age;

    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }
};

int main() {
    Person obj("Owais", 27);

    cout << obj.name << endl;
    cout << obj.age << endl;

    return 0;
}

