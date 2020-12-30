#include <iostream>
using namespace std;

int main() {
	int i, n;
	cin >> n;

	if (n == 1) cout << "smallest prime number is 2" << endl;

	for (i = 2; i < n; ++i) {
		if (n % i == 0) {
			cout << "Not prime number" << endl;
			break;
		}
	}

	if (n == i) cout << "Number is prime" << endl;

	return 0;
}