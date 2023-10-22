#include <iostream>
#include <string>

using namespace std;

int main() {

	int some_array[2][2] = 
	{
		{2,3},
		{4,8}
	};


	int some_array2[2][2] = 
	{
		{4,7},
		{2,5}
	};


	int final_array[2][2]={0};


	for(int i=0; i<2; i++) {
		for(int j=0; j<2; j++) {
			final_array[i][j]=some_array[i][j]+some_array2[i][j];
		}
	}


	for(int k=0; k<2; k++) {
		for(int l=0; l<2; l++) {
			cout << "Array element " << k << "," << l << ": "<<final_array[k][l] << endl;
		}
	}


	return 0;
}