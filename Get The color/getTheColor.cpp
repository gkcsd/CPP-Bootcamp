#include <iostream>
#include <string>

using namespace std;

int main() {

	string myColor;

	cout << "Enter your favourite color: " << endl;
	getline(cin, myColor);

	cout << "Hey " << myColor << " is my favourite color" << endl;

	return 0;
}