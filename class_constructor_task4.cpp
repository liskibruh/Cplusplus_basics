#include <iostream>
#include <string>

using namespace std;

class student {
    private:
        string name;
        int* grades;
        int size;
    public:
        student(string name, int* grades, int size) {
            this-> name = name;
            this-> grades = grades;
            this-> size = size;
        }

        float average() {
            int sum;
            for(int i=0; i<=size; i++) {
                sum+=grades[i];
            }
            return sum/size;
        }
};

int main() {
    int grades[] = {2,3,2,3,4,2,4};
    int size = sizeof(grades)/sizeof(grades[0]);
    cout << size << endl;
    student obj("Owais", grades, size);

    float result = obj.average();

    cout << "Result: " << result << endl;

    return 0;
}