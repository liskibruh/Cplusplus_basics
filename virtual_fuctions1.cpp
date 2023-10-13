#include <iostream>

using namespace std;

class Shape {
    public:
        virtual void area()=0;
};

class Circle: public Shape {
    public:
        float radius;
        float pi = 3.14;
        
        Circle(float r){
            this->radius=r;
        }
        
        void area(){
            cout << "Area of circle is: " << 2*pi*radius << endl;
        }
};

class Rectangle: public Shape {
    public:
        float length;
        float width;
        
        Rectangle(float l, float w) {
            this->length = l;
            this->width = w;
        }
        
        void area() {
            cout << "Area of Rectangle is: " << length*width << endl;
        }
};

class Triangle: public Shape {
    public:
        float base;
        float height;
        
        Triangle(float b, float h) {
            this->base = b;
            this->height = h;
        }
        
        void area(){
            cout << "Area of Triangle is: " << (1/2*(base*height)) << endl;
        }
};

int main()
{
    Circle c1(2.21);
    Rectangle r1(4.2,3.6);
    Triangle t1(2.8,3.6);
    
    Shape* s1 = &c1;
    Shape* s2 = &r1;
    Shape* s3 = &t1;
    
    s1->area();
    s2->area();
    s3->area();

    return 0;
}
