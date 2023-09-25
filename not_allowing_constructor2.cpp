#include <iostream>

using namespace std;

class some_class {
    private:
        int a;

    public:
        some_class() = delete;
};

int main() {
    //some_class obj1; object cannot be created and so the constructor will not be called

    return 0;
}