#include <iostream>

using namespace std;


int lifeUp() {

	static int life = 3; // global qualifier we can use this variable anywhere in the program..

	return ++life;
}



int main() {

	int life = 3;

	int x;

	cout << "Your starting game life is: " << life << endl;

	x = lifeUp();
	cout << "Your updated game life is: " << x << endl;

	x = lifeUp();
	cout << "Your updated game life is: " << x << endl;

	return 0;
}