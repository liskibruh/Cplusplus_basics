/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter the number of items:" << endl;
	cin >>n;
    
    cout << "n is: " << n << endl;
    
	int *arr = new int(n); //dynamic array

	cout << "Enter items" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	int *ptr=arr;
	int sum=*ptr;
	for (int b = 0; b < n; b++) {
	    ptr++;
	    sum=sum+*ptr;
	}
	
	cout << "Sum is: " << sum << endl;
    
	return 0;
}
