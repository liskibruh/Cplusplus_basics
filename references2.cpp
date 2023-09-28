#include <iostream>

using namespace std;

void some_func(int& value) {
    for(int i=0; i<10; i++){
        value++;
        cout << value << endl;
    }
}

int main() {
    int a=3;
    some_func(a);

    return 0;
}