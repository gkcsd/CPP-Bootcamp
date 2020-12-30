#include <iostream>

using namespace std;

int main() {

	int my_number[] = { 1, 2, 3, 4, 5, 6, 7};

	int i = 0;

	do {
		cout << "Count is: " << my_number[i] << endl;
		i++;
	} while (i < 7);

	cout << "Outside the loop" << endl;
}