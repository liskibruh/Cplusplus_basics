#include <iostream>

using namespace std;

class Student {
    private:
        static int total_students;
        float score;
    public:
        Student(float score);
        static void display();
        static float get_average(Student studentarray[]);
};

int Student :: total_students=0;
Student :: Student(float score) {
    this->score=score;
    total_students++;
}

void Student :: display() {
    cout << "Total Students: " << total_students << endl;
}

float Student :: get_average(Student studentarray[]) {
    float sum = 0;
    for(int i=0; i<2; i++) {
        sum+=studentarray[i].score;
    }

    return sum/total_students;
    
}

int main () {
    Student s1(10);
    Student s2(15);
    Student studentarray[2]={s1,s2};
    float average = Student :: get_average(studentarray);
    cout << "Average Score: " <<average << endl;

    return 0;
}

