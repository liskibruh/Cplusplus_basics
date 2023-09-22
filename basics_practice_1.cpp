#include <iostream>

using namespace std;

void some_func(int &x) {
    cout << x << endl;
}

int main() {
    int a=5;
    some_func(a);

    return 0;
}