#include<iostream>
using namespace std;
int main() {
	int i, n;
	cout << "Enter the number of items:" << endl;
	cin >>n;

	int *arr = new int(n);

	cout << "Enter items" << endl;
	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "You entered: ";
	for (int b = 0; b < n; b++) {
		cout << arr[b] << " ";
	}
    
	return 0;
}