#include <iostream>
#include <string>

using namespace std;

class Car {
    private:
        static string car_name;

    public:
        Car(string name);
        void display();
};

string Car:: car_name;

Car :: Car(string name) {
    car_name=name;
}

void Car :: display() {
    cout << "Car Name: " << car_name << endl;
}

int main() {
    Car audi("Audi");
    audi.display();

    return 0;
}
