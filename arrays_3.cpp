#include <iostream>
#include <string>


using namespace std;

int main() {

	int some_array[6] = {0};

	for(int i=0; i<6; i++) {
		cout << "Enter array element " << i+1 << ": ";
		cin >> some_array[i];
	}

	int some_num=0;
	//shift elements in the array one unit to the right
	cout << "Enter the value that should be stored at index 2: ";
	cin >> some_num;

	for(int j=5; j>=2; j--) {
        some_array[j] = some_array[j-1];
        some_array[4] = some_array[2];
	}

	some_array[2]=some_num;
	cout << "Array after everything: " << endl;

	for(int k=0; k<6; k++) {
		cout << some_array[k] << " ";
	}



	return 0;
}