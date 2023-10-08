#include <iostream>

using namespace std;

class Shape {
    public:
        void display_shape() {
            cout << "This is a shape" << endl;
        }
};

class Polygon: public Shape {
    public:
        void display_shape() {
            cout << "Polygon is a shape" << endl;
        }
};

class Rectangle: public Polygon {
    public:
        void display_shape() {
            cout << "Rectangle is a polygon" << endl;
        }
};

class Triangle: public Polygon {
    public:
        void display_shape() {
            cout << "Triangle is a polygon" << endl;
        }
};

class Square: public Rectangle {
    public:
        void display_shape() {
            cout << "Square is a rectangle" << endl;
        } 
};

int main() {
    Shape shape1;
    Polygon poly1;
    Rectangle rect1;
    Triangle tri1;
    Square sqr1;

    shape1.display_shape();
    poly1.display_shape();
    rect1.display_shape();
    tri1.display_shape();
    sqr1.display_shape();

    return 0;
}