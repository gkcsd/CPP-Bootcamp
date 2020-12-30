#include <iostream>

using namespace std;


int getTwo() {

	return 2;
}


void interesting() {

	cout << "I am interesting" << endl;
}

int main() {

	int whatIgot = getTwo();

	cout << whatIgot << endl;

	// functional pointer...


	void (*pointsToInteresting)() = interesting;

	pointsToInteresting();
	(*pointsToInteresting)(); //pointer dereference..



	return 0;
}