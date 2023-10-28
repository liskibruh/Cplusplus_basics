#include<iostream>

using namespace std;

class ArrayAnalyzer {
    public:
        //method for counting odd numbers
        int countOdds(int* arr, int size) 
            {
                int count_odds = 0;
                for(int i=0; i<size; i++) 
                {
                    if(arr[i]==1 | arr[i]%2==1)
                    {
                        count_odds++;
                    }
                }
                return count_odds;
            }
        
        // method for counting even numbers
        int countEvens(int* arr, int size) 
            {
                int count_odds = 0;
                for(int i=0; i<size; i++) 
                {
                    if(arr[i]%2==0)
                    {
                        count_odds++;
                    }
                }
                return count_odds;
            }
        
        // method for counting prime numbers
        int countPrimes(int* arr, int size)
            {
                int count_primes = 0;
                int j, p;
                for (int i = 0; i<size; i++) 
                {
                    j = 2;
                    p = 1;
                    while (j < arr[i]) 
                    {
                        if (arr[i] % j == 0) 
                        {
                            p = 0;
                            break;
                        }
                        j++;
                    }
                    if (p == 1 && arr[i]!=1) 
                    {
                        //cout << "The number is: " << arr[i] << endl;
                        count_primes++;
                    }
                }
                return count_primes;
            }
};

//main
int main() {
    ArrayAnalyzer arr_analyzer; // class object

    int nums_array[] = {1,2,3,4,5,6,7,8,9,11,43,24,15};
    int size = sizeof(nums_array)/sizeof(nums_array[0]);

    int odds = arr_analyzer.countOdds(nums_array, size);
    cout << "Number of odds: " << odds << endl;

    int evens = arr_analyzer.countEvens(nums_array, size);
    cout << "Number of evens: " << evens << endl;

    int primes = arr_analyzer.countPrimes(nums_array, size);
    cout << "Number of primes: " << primes << endl;

    return 0;
}