#include <iostream>

using namespace std;

int main() {

	int n, fact = 1;

	cout << "Enter the integer number: " << endl;
	cin >> n;

	for (int i = n; i >= 1; i--) {
		fact *= i;
	}

	cout << "The result of factorial number is: " << fact << endl;

	return 0;
}