#include <iostream>

using namespace std;

class Employee {
public:
	string name;
	double salary=0;

	Employee(string name, double salary) {
		this->name = name;
		this->salary = salary;
	}

	virtual double calcluate_bonus() {
		return 0.0;
	}

	void display_info() {
		cout << "Name: " << name << endl;
		cout << "Salary: $" << salary << endl;
		cout << "Bonus: " << calcluate_bonus() << endl;
		cout << "-----------------------------------" << endl;
	}

	virtual ~Employee() {}
};

class Manager : public Employee {
public:
	double bonus_percentage;

	Manager(string name, double salary, double bonus_percentage) 
	: Employee(name, salary) {
		this->bonus_percentage = bonus_percentage;
	}

	double calcluate_bonus() {
		return salary+ (salary*bonus_percentage);
	}

}; 


class Engineer : public Employee { 
public:
	int project_completed;

	Engineer(string name, double salary, int project_completed)
	: Employee(name, salary) {
		this->project_completed = project_completed;
	}

	double calcluate_bonus() {


		if(project_completed>5) {
			return salary+(salary*0.30); //extra bonus for more work
		}
		else{
			return 0.0; 
		}
	}
};

class Salesperson : public Employee {
public:
	int total_sales;

	Salesperson(string name, double salary, int total_sales)
	: Employee(name, salary) {
		this->total_sales = total_sales;
	} 

	double calcluate_bonus() {
		if(total_sales>10000) {
			return salary+(salary*0.25); //extra bonus for more sales
		}

		else {
		return 0.0;
		}	
	}
};

int main() {
    Manager manager("John", 60000.0, 0.2);
    Engineer engineer("Alice", 50000.0, 10);
    Salesperson salesperson("Bob", 40000.0, 100000.0);


    manager.display_info();
    engineer.display_info();
    salesperson.display_info();


	return 0;
}