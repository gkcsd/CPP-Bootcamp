#include <iostream>
#include <string>
using namespace std;


class Rectangle {

	double _length;
	double _breadth;

public:
	Rectangle(double l = 2.0, double b = 2.0) {

		_length = l;
		_breadth = b;
	}

	double Area() {

		return _length * _breadth;
	}

	int Compare(Rectangle rectangle) {

		return this->Area() > rectangle.Area();
	}


};


int main() {

	Rectangle h1(3.0, 3.0);
	Rectangle h2(4.0, 4.0);

	cout << h2.Compare(h1) << endl;

	if (h1.Compare(h2)) {
		cout << "h2 is smaller" << endl;
	} else {
		cout << "h1 is bigger" << endl;
	}

	return 0;
}