#include <iostream>

using namespace std;

class some_class {
    private:
        int a;
        int b;

    public:
        some_class(int a, int b) {
            this->a = a;
            this->b = b;
        }

        void display() {
            cout << "a is: " << a << endl;
            cout << "b is: " << b << endl;
        }

        //destructor
        ~some_class() {
            cout << "Destructor Called!" << endl;
        }

};

int main() {
    some_class obj1(2,3);

    obj1.display();
    return 0;
}