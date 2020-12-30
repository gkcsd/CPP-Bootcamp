#include <iostream>
#include <string>
using namespace std;

void swap(int &a, int &b) {

	int temp = move(a);
	a = move(b);
	b = move(temp);
}

string printMe() {
	return "I am string";
}

int main() {

	int a = 10;
	int b = 15;

	swap(a, b);

	cout << "A: " << a << endl << "B: " << b;

	cout << endl;

	string s = printMe(); // this is copying the thing and has two refferences..

	string&& ss = printMe(); // it's moving the value..

	return 0;
}