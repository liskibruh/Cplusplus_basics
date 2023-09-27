#include <iostream>

using namespace std;

int main() {

    int arr[]={2,4,5,1,6};
    int *ptr = arr;
    int max = *ptr;
    int index=0;


    for(int i=0; i<5; i++) {
        ptr++;
        if(*ptr>max) {
            max=*ptr;
            index=i;
        }
    }

    cout << "Largerst Number: " << max << endl;
    cout << "Index is: " << index << endl;

    return 0;
}