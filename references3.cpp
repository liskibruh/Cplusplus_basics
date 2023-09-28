#include <iostream>

using namespace std;

class some_class {
    private:
        int no_of_evens=0;
        int no_of_odds=0;
    public:
        int count_evens(int (&arr)[5]) {
            for(int i =0; i<5; i++) {
                if(arr[i]%2==0) {
                    no_of_evens++;
                }
            }
            return no_of_evens;
        }

        int count_odds(int (&arr)[5]) {
            for(int i=0; i<5; i++) {
                if(arr[i]%2!=0) {
                    no_of_odds++;
                }
            }
            return no_of_odds;
        }
};

int main() {
    some_class obj1;
    int arr[5]={4,2,6,7,8};

    int evens=obj1.count_evens(arr);
    int odds=obj1.count_odds(arr);

    cout <<"No. of evens: " << evens << endl;
    cout <<"No. of odds: " << odds << endl;

    return 0;
}