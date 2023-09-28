#include <iostream>

using namespace std;

int main() {
    int a=10;
    int& refA = a;

    cout << "The value of a: " << a <<endl;
    cout << "The value of a reference: " << refA << endl;

    refA=33;

    cout << "The value of a reference: " << a << endl;
    cout << "The value of a reference: " << refA << endl;

    return 0;
}