#include <iostream>
int factoial(int n);

using namespace std;


int main() {

	int n;

	cout << "Enter the number: ";
	cin >> n;

	cout << "The result of factoial number is: " << factoial(n) << endl;

	return 0;
}


int factoial(int n) {

	if (n > 1) {

		return n * factoial(n - 1);
	} else {

		return 1;
	}
}