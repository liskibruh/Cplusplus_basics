#include <iostream>
#include <string> 

using namespace std;

int main() {
	int some_array[3][3]={0};
	int some_num;

	for(int i=0; i<2; i++) {
		for(int j=0; j<2; j++) {
			cin >> some_num;
			some_array[i][j]=some_num;
		}
	}

	for(int k=0; k<2; k++) {
		for(int l=0; l<2; l++) {
		    cout << "Element " << k << "," << l << " of array: ";
			cout << some_array[k][l] << endl;
		}
	}


	return 0;
}