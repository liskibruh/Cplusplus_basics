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
        
        some_class(some_class &class_obj) {
            this->a = class_obj.a;
            this->b = class_obj.b;
        }

        void display() {
            cout << "a is: " << a << endl;
            cout << "b is: " << b << endl;
        }
};

int main() {
    some_class obj1(2,5);
    some_class obj2 = obj1;

    obj1.display();
    obj2.display();

    return 0;
}