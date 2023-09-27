// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    // Write C++ code here
    int arr[] = {2,3,4,4};
    
    int *aptr;
    aptr=arr; // no need to write & for arrays. 
    
    cout << aptr << endl;
    cout << ++aptr << endl;

    return 0;
}