// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    int a;
    a=7;
    int *aptr=&a;
    
    cout << "The address of a  is " << &a << endl;
    cout << "The value of aptr is " << aptr << endl;
    
    cout << "the value of a is " << a << endl;
    cout << "the value of *aptr is " << *aptr << endl;
    
    cout << "Showing that * and & are inverses of each other " << &*aptr << endl;
    
    cout << "*&aptr " << *&aptr << endl;
}