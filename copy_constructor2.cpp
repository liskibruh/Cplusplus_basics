#include <iostream>

using namespace std;

class student {
    private:
        string std_name;
        int std_grades[5];
    
    public:
        student(string name, int grades[5]) {
            this->std_name=name;
            for(int i=0; i<5; i++) {
                this->std_grades[i] = grades[i];
            }
                
        }
        
        student(student &class_obj) {
            std_name=class_obj.std_name;
            for(int i=0; i<5; i++) {
                std_grades[i]=class_obj.std_grades[i];
            }
        }
        
        void avg_grades() {
            float sum=0;
            for(int i=0; i<5; i++) {
                sum=sum+std_grades[i];
            }
            float average=sum/5;
            
            cout << "Average grade is: " << average << endl;
        }
};

int main()
{
    string name = "sohail";
    int grades[5]={1,3,5,3,5};
    
    student obj1(name, grades);
    obj1.avg_grades();
    
    student obj2 = obj1;
    obj2.avg_grades();
    

    return 0;
}
