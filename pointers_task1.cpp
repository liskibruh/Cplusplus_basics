#include <iostream>

using namespace std;

int main() {
    int a=5;
    int b=10;

    int *ptr1=&a;
    int *ptr2=&b;

    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;


    return 0;
}