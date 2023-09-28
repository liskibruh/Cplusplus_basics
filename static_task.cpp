#include <iostream>

using namespace std;

class Counter {
    private:
        static int count;
        int value=0;

    public:
        Counter();
        static int increment_count();
        void display();
};

int Counter:: count = 0;

Counter :: Counter() {
    value=100;
}

int Counter :: increment_count() {
    return count++;
}

void Counter::display() {
    cout << "Value of count is: " << count << endl;
    cout << "Value of value is: " << value << endl;
}

int main() {
    Counter c1, c2;
    c1.increment_count();
    c1.display();
    c2.display();

    return 0;
}