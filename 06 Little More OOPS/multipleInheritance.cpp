#include <iostream>
#include <string>
using namespace std;

class Money {
public:
	void getMoney() {
		cout << "Hey, Peter has gotten 5k USD in his accout" << endl;
	}
};

class Man {
	string _name;
	int _age;
	Man() {}

	friend class Superman;
	friend class Spiderman;

protected:
	Man(const string & name, const int & age) : _name(name), _age(age) {}
	void run() {
		cout << "I can run" << endl;
	}
	int getAge() {
		return _age;
	}
public:
	void sayName() const;
};

void Man::sayName() const {
	cout << "My name is: " << _name << " and age is: " << _age << endl;
}

//Superman class..

class Superman : public Man, public Money {
	bool _fly;
public:
	Superman(string name) : Man(name, 26) {}
	// void run() {
	// 	cout << "I can run at light speed" << endl;
	// }
	void run() {
		cout << "I can run at light speed " << _age << endl;
	}
};

//Spiderman class...

class Spiderman : public Man {
	bool _webbing;
public:
	Spiderman(string name) : Man(name, 19) {}
	void run() {
		cout << "I can run at normal speed " << _age << endl;
	}
};


int main() {

	Superman clerk("Kent");
	clerk.sayName();
	clerk.run();
	clerk.getMoney();

	cout << endl;

	Spiderman peter("Raju");
	peter.sayName();
	peter.run();



	return 0;
}