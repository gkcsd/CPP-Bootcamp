#include <bits/stdc++.h>
using namespace std;

class Man {
	string _name;
	int _age;
protected:
	Man(const string &name, const int &age) : _name(name), _age(age) {}
	void run() { cout << "Man can run";}
public:
	void sayName() const;
};

void Man::sayName() const {
	cout << "My name is: " << _name << " and age is: " << _age << endl;
}

class Superman : public Man {
	bool _flight;
public:
	Superman(string name) : Man(name, 26) {}
	void run() {cout << "Superman can run faster than train" << endl;}
};

class Spiderman : public Man {
	bool _webbing;
public:
	Spiderman(string name) : Man(name, 19) {}
	void run() {cout << "Spiderman can run at norman speed" << endl;}
};

int main() {

	Superman clerk("Kent");
	clerk.sayName();
	clerk.run();

	Spiderman peter("Perter");
	peter.sayName();
	peter.run();

	return 0;
}