#include <iostream>

using namespace std;


void printval(int a) {

	cout << "The integer value is: " << a << endl;
}

void printval(double a) {

	cout << "The Double value is: " << a << endl;
}

void printval(int * a) {

	cout << "The integer pointer is: " << a << endl;
}


int main() {

	printval(nullptr);

	return 0;
}