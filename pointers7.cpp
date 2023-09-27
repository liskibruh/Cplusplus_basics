// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

float sum(int *arr) {
    
    for(int i=0; i<4; i++){
        
       int *aptr=*aptr+*arr;
       arr=arr+i;
    }
    
    return *aptr;
}

int main() {
    // Write C++ code here
    int arr[]={1,2,3,4};
    float result=sum(arr);
    cout << result << endl;
    
    
    
    return 0;
}