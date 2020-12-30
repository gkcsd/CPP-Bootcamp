#include <iostream>

using namespace std;

template <typename T>

T addme(T a, T b) {

	return a + b;
}

int main() {

	float v3 = 5.4;
	float v4 = 7.7;

	cout << addme(v3, v4) << endl;

	return 0;
}