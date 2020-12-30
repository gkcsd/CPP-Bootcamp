#include <iostream>

using namespace std;

int main() {

	int my_array[4] = {1, 2, 3, 4};
	cout << my_array << endl;


	int another_array[4];
	another_array[0] = 10;
	another_array[1] = 19;

	cout << another_array[0] << endl;

	*another_array = 15; // here we update the value by using an array pointer
	cout << another_array[0] << endl;

	cout << another_array[1] << endl;
	int *ap = another_array;
	ap++;
	*ap = 209;

	cout << another_array[1] << endl;

	// int n;

	// cout << "Enter the number: " << endl;
	// cin >> n;

	// int fact = 1;

	// for (int i = n; i >= 1; i--) {
	// 	fact *= i;
	// }
	// cout << "The result is: " << fact << endl;

	return 0;
}