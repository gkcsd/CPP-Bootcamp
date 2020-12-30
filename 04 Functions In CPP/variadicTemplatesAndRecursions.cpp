#include <iostream>
#include <string>

using namespace std;

template <typename T>
void func(T a) {

	cout << "Function one: " << a << endl;
}						// This is exit stratergy..


template <typename T, typename... Args>
void func(T a, Args... args) {

	cout << "Function Two: " << a << endl;

	func(args...);
}						// This is variadic function it takes only multiple arguments..

int main() {

	string myName = "Ganesh";

	func(myName);

	func(1, 2, 3.4, 4.5, myName);

	return 0;
}