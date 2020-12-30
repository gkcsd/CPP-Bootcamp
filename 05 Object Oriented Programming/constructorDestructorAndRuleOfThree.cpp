#include <iostream>
#include <string>
using namespace std;

class Phone {

	string _name = "";
	string _os = "";
	int _price = 0;

public:
	Phone(); // default constructor.
	Phone(const string &name, const string &os, const int &price); // parameter constructor..
	Phone(const Phone &); // copy constructor..
	string getName() { return _os;}
	~Phone();

};

Phone::Phone() : _name(), _os("Andy"), _price() {
	cout << "Defult constructor" << endl;
}

// parmeter constructor..

Phone::Phone(const string &name, const string &os, const int &price) : _name(name), _os(os), _price(price) {

	cout << "This is parameter constructor" << endl;
}

// copy constructor..

Phone::Phone(const Phone & values) {

	cout << "OVERWRITE the copy constructor" << endl;

	_name = "Asech " + values._name;
	_os = "Skinned " + values._os;
	_price = values._price;
}

// Destructor..

Phone::~Phone() {

	cout << "Destructor called for: " << _name << endl;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif



	Phone samsungA1;

	cout << samsungA1.getName() << endl;

	//second object..

	Phone OnePlus("OnePlus", "Android", 799);

	cout << OnePlus.getName() << endl;

	// copy constructor..

	Phone OnePlus8s = OnePlus;

	cout << OnePlus8s.getName() << endl;


	return 0;
}






