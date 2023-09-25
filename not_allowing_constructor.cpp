#include <iostream>

using namespace std;

class some_class {
    private:
        some_class() {}; // the constructor is private now so the obj of this class cannot be created
        int a;

    public:
        void display() {

        }

};

int main() {
    // some_class obj1; object cannot be created because the constructor is private

    return 0;
} 