#include <iostream>

using namespace std;


struct user {
	const int uID;
	const char *name;
	const char *email;
	int course_count;
	//struct is a blueprint here we declare variables not values
};

int main() {

	user mickey = {001, "Mickey", "mickey@cartoon.com", 2};
	user donald = {002, "Donald", "donald@cartoon.com", 3};

	cout << mickey.email << endl;

	//donald code..

	user *d = &donald; // d is a reference pointer

	d->course_count = 21;

	cout << donald.course_count << endl;



	cout << donald.email << endl;

	donald.course_count = 4;
	cout << donald.course_count << endl;

	donald.email = "sdonaldy@toon.com"; // because const keyword is refer to the pointer means locate the memory location of the email not for value
	cout << donald.email << endl;

	return 0;
}