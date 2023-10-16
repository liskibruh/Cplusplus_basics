#include <iostream>

using namespace std;

class Animal {
public:
	string name;

	Animal(string name) {
		this->name = name;
	}

	virtual void MakeSound() {
		cout << "Some animal sound." << endl;
	}

	virtual ~Animal() {}
};

class Lion : public Animal {
public:
	Lion(string name) : Animal(name) {

	}

	void MakeSound() {
		cout << name << " is a lion, it roars." << endl;
	}
};

class Dog : public Animal {
public:
	Dog(string name) : Animal(name) {

	}

	void MakeSound() {
		cout << name << " is a dog, it barks." << endl;
	}
};


class Cat : public Animal {
public:
	Cat(string name) : Animal(name) {

	}

	void MakeSound() {
		cout << name << " is a cat. it meows." << endl;
	}
};


int main() {
	Lion lion("Simba");
	Dog dog("Rex");
	Cat cat("Whiskers");

	lion.MakeSound();
	dog.MakeSound();
	cat.MakeSound();

	return 0;
}