#include <iostream>

using namespace std;

void sayOne() {
	cout << "Hello World!" << endl;
}

int sayTwo() {

	return 52;
}

void sayThree() {
	cout << "3" << endl;
}


int main() {

	sayOne();

	cout << sayTwo() << endl;

	sayThree();

	return 0;
}