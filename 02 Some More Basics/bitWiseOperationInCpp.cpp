#include <iostream>

using namespace std;

int main() {

	unsigned int x = 6;
	unsigned int y = 9;

	unsigned int z = x & y;
	unsigned int a = x | y;
	unsigned int b = ~x;
	unsigned int c = y >> 1;
	unsigned int d = y << 1;

	cout << "The value of z: " << z << endl;
	cout << "The value of a: " << a << endl;
	cout << "The value of b: " << b << endl;
	cout << "The value of c: " << c << endl;
	cout << "The value of d: " << d << endl;

	return 0;
}