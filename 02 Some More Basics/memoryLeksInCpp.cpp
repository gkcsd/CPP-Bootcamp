#include <iostream>

using namespace std;

int main() {

	int * myp;
//
	// myp = new int [10000];
	// cout << "Memory space allocated" << endl;

	try {
		myp = new int [10000];
		cout << "Memory space allocated" << endl;
	} catch (...) {
		cout << "Failed in allocating Memory" << endl;
	}

	// delete myp;
	delete [] myp;

	return 0;
}