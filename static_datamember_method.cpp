#include <iostream>

using namespace std;

class some_class {
    private:
        static int count;
        int value=5;
        
    public:
        static void increment_count();
        void print();
};

int some_class:: count;

void some_class:: increment_count() {
    count++;
}

void some_class:: print() {
    cout << "Value is: " << value << endl;
    cout << "Count is: " << count << endl;
}

int main() {
    some_class obj1, obj2, obj3;
    
    obj1.increment_count();
    obj1.print();
    
    obj2.increment_count();
    obj2.print();
    
    obj3.increment_count();
    obj3.print();
    
    return 0;
}