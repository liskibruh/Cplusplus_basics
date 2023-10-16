#include <iostream>
#include <string>

using namespace std;

class Vehicle{
public:
	string name;
	double rentalRate;
	bool rented;

	Vehicle(string name, double rentalRate, bool rented) {
		this->name = name;
		this->rentalRate = rentalRate;
		this->rented = false;
	}

	virtual void Rent() {
		if(!rented) {
			cout << "Renting" << name << "for $" << rentalRate << endl;
			rented=true;
		}
		else {
			cout << name << " is already rented." << endl;
		}
	}

	virtual void Return() {
		if(rented) {
			cout << "Returning " << name <<". Thank You!" << endl;
		}
		else {
			cout << name << " is not currently rented." << endl;
		}
	}
	virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
	int passengerCapacity;

	Car(string name, double rentalRate, int passengerCapacity)
		: Vehicle(name, rentalRate, false) {
		this->passengerCapacity=passengerCapacity;
	}

	void Rent() {
		if(!rented) {
			cout << "Renting a car with " << passengerCapacity << " passenger seats for $" << rentalRate << endl;
			rented=true;
		}
		else {
			cout << "Car with " << passengerCapacity << " seats is already rented." << endl;
		}
	}

	void Return() {
		Vehicle::Return();
	}
};

class Bicycle : public Vehicle {
public:
	bool hasBasket;

	Bicycle(string name, double rentalRate, bool hasBasket)
	: Vehicle(name, rentalRate,false) {
		this->hasBasket=hasBasket;
	}

	void Rent() {
		if(!rented) {
			cout << "Renting a bicycle" << (hasBasket ? " with a basket" : "") << " for $" << rentalRate << endl;
			rented=true;
		}
		else {
			cout << "Bicycle" << (hasBasket ? " with a basket" : "") << " is already rented" << endl;
		}
	}

	void Return() {
		Vehicle::Return();
	}
};


class Boat : public Vehicle {
public:
	int passengerCapacity;

	Boat(string name, double rentalRate, int passengerCapacity)
	: Vehicle(name, rentalRate,false) {
		this->passengerCapacity=passengerCapacity;
	}

	void Rent() {
		if(!rented) {
			cout << "Renting a boat with a capacity of " << passengerCapacity << " passengers for $" << rentalRate << endl;
			rented=true;
		}
		else {
			cout << "Boat with a capacity of " << passengerCapacity << " passengers is already rented." << endl;
		}
	}

	void Return() {
		Vehicle::Return();
	}
};


int main() {
    Car car("Sedan", 50.0, 5);
    Bicycle bicycle("Mountain Bike", 10.0, true);
    Boat boat("Fishing Boat", 100.0, 4);

    car.Rent();
    car.Return();

    bicycle.Rent();
    bicycle.Rent();
    bicycle.Return();

    boat.Rent();
    boat.Return();
	return 0;
}