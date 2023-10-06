#include <iostream>

using namespace std;

class Fruit {
    public:
        static int fruit_count;
        Fruit();
        int getfruits();
};

int Fruit::fruit_count=0;
Fruit:: Fruit() {
    fruit_count++;
}
int Fruit:: getfruits() {
    return fruit_count;
}

class Apples: public Fruit {
    public:
        static int apple_count;
        Apples();
        int getapples();
};

int Apples:: apple_count=0;
Apples:: Apples() {
    apple_count++;
}
int Apples:: getapples() {
    return apple_count;
}

class Mangoes: public Fruit {
    public:
        static int mangoes_count;
        Mangoes();
        int getmangoes();
};

int Mangoes:: mangoes_count=0;
Mangoes:: Mangoes() {
    mangoes_count++;
}
int Mangoes:: getmangoes(){
    return mangoes_count;
}

int main() {
    Apples a1;
    cout << a1.getfruits() << endl;
    cout << a1.getapples() << endl;

    Mangoes m1;
    cout << m1.getfruits() << endl;
    cout << m1.getmangoes() << endl;

    return 0;
}