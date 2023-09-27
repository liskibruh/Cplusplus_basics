#include <iostream>

using namespace std;

int main() {

    int arr[]={2,5,1,6,4};
    int *ptr=arr;
    int max=*ptr;

    for(int i=0; i<5; i++) {
        ptr++;
        if(max<*ptr) {
            max=*ptr;
        }
    }
    
    cout <<"Max value is: " << max << endl;
    

    return 0;
}