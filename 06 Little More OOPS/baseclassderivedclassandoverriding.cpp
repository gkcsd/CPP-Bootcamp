#include <iostream>
#include <string>
using namespace std;


class Man {
	string _name;
	int _age;
	Man() {} //defult constructor but it is disable
protected:
	Man(const string & name, const int & age) : _name(name), _age(age) {}
	void run() {
		cout << "The man can run";
	}
public:
	void sayName() const;
};

void Man::sayName() const {
	cout << "My name is: " << _name << " and age is: " << _age << endl;
}

//Superman derived class

class Superman : public Man {
	bool _fly;
public:
	Superman(string name) : Man(name, 26) {}
	void run() {
		cout << "I can run at light speed" << endl;
	}
};

//Spiderman derived class..

class Spiderman : public Man {
	bool _webbing;
public:
	Spiderman(string name) : Man(name, 19) {}
	void run() {
		cout << "I can run at normal speed" << endl;
	}
};


int main() {

	Superman clerk("Kent");
	clerk.sayName();
	clerk.run();

	cout <<endl;

	Spiderman peter("Raju");
	peter.sayName();
	peter.run();



	return 0;
}