#include <iostream>
#include <string>

using namespace std;

class Animal {
    private:
        string sound;

    public:
        Animal(string dog_sound);
        void display();
};

Animal :: Animal(string dog_sound) {
    sound = dog_sound;
}

void Animal :: display() {
    cout << "Sound: " <<sound << endl;
}

int main() {
    Animal duck("Quack!");
    duck.display();

    return 0;
}