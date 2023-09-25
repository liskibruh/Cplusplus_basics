#include <iostream>

using namespace std;

class person {
    private:
        int a;
        int b;
    
    public:
        person(){
            a=0;
            b=0;
        }

        void display() {
            cout << "The value of a is: " << a << endl;
            cout << "The value of b is: " << b << endl;
        }
};

int main() {

    person obj1;
    obj1.display();

    return 0;
}