#include <iostream>

using namespace std;

class Student {
    private:
        static int total_students;
    public:
        Student();
        static void display();
};

int Student :: total_students=0;
Student :: Student() {
    total_students++;
}

void Student :: display() {
    cout << "Total Students: " << total_students << endl;
}


int main () {
    Student s1;
    s1.display();
    Student s2;
    s1.display();

    return 0;
}

