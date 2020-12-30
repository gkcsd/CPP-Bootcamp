#include <iostream>
#include <string>

using namespace std;

int main() {

	string firstName, lastName;

	cout << "Enter the first name: " << endl;
	getline(cin, firstName);

	cout << "Enter the last name: " << endl;
	getline(cin, lastName);

	cout << "My Name is " << firstName << " " << lastName << endl;

	return 0;
}