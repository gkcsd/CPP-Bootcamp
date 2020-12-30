#include <iostream>
#include "adder.h"

using namespace std;


// Second method..

// void lifeUp(int *life) {

// 	++(*life);
// }

// int main() {

// 	int life = 3;

// 	lifeUp(&life);

// 	cout << life << endl;

// 	return 0;
// }



// first method by using reference..

void lifeUp(int &life) {

	++life;
}


int main() {

	int life = 3;

	lifeUp(life);

	cout << life << endl;



	cout << endl;



	int v1 = 5;
	int v2 = 5;

	float v3 = 2.5;
	float v4 = 15.2;

	cout << addMe(v1, v2) << endl;

	cout << addMe(v3, v4) << endl;

	return 0;
}