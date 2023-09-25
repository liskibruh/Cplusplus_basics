#include <iostream>

using namespace std;

class some_class {
    private:
        int x;
        int y;
    public:
        some_class() 
        {
            //default constructor
        }

        void Init() {
            x=0;
            y=0;
        }
        void some_func() 
        {
            cout << "X is: " << x << endl;
            cout << "Y is: " << y << endl;
        }
};

int main() {
    some_class obj1;
    obj1.Init();
    obj1.some_func();

    return 0;
}