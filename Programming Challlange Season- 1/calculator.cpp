#include <iostream>
#include <string>
using namespace std;

int main() {

	int64_t num1, num2;
	char operation, redo;

	do {
		cout << "Enter the operation you want to perform:" << endl;
		cin >> operation;

		cout << "Enter the numbers to perform the " << operation << " in it" << endl;

		cout << "Enter the first number: " << endl;
		cin >> num1;
		cout << "Enter the second number: " << endl;
		cin >> num2;

		cout << "You have selected " << num1 << " and " << num2 << endl;

		switch (operation) {
		case '+':
			cout << "The additon of (" << num1 << ", " << num2 << "):" << endl;
			cout << num1 + num2 << endl;
			break;
		case '-':
			cout << "The substraction of (" << num1 << ", " << num2 << "):" << endl;
			cout << num1 - num2 << endl;
			break;
		case '*':
			cout << "The multiplication of (" << num1 << ", " << num2 << "):" << endl;
			cout << num1*num2 << endl;
			break;
		case '/':
			if (num2 == 0) {
				cout << "It's invalid";
			} else {
				cout << "The additon of (" << num1 << ", " << num2 << "):" << endl;
				cout << num1 / num2 << endl;
			}
			break;
		default:
			cout << "Enter onlu ('+','-','*','/') operations, It's INVALID RESULT" << endl;
		}
		cout << "Enter Y or y for continue the operation" << endl;
		cin >> redo;
	} while ('Y' == redo || 'y' == redo);

	return 0;
}