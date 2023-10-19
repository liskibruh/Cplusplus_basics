#include <iostream>
#include <string>

using namespace std;

int main() {

	int myDataArray[5];

	for(int i=0; i<5; i++) {
		cout << "Enter number " << i+1 << endl;
		cin >> myDataArray[i];
	}


	for(int j=0; j<5; j++) {
		cout << "Array Element " << j+1 << " is: " << myDataArray[j] << endl;
	}

	return 0;
}