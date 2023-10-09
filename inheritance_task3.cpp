#include <iostream>

using namespace std;

class Mammals {
    public:
        void announce() {
            cout << "I am mammal" << endl;
        }
};

class MarineAnimals {
    public:
        void announce() {
            cout << "I am marine animal" << endl;
        }

};

class BlueWhale: public Mammals, public MarineAnimals {
    public:
        void announce() {
            cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
        }
};

int main() {
    Mammals mm1;
    MarineAnimals ma1;
    BlueWhale bw1;

    mm1.announce();
    ma1.announce();
    bw1.announce();

    bw1.Mammals::announce();
    bw1.MarineAnimals::announce();

    return 0;
}