#include <iostream>

using namespace std;

int main() {

	char my_string[] = "Ganesh";

	char my_name[] = {'G', 'a', 'n', 'e', 's', 'h', 0};

	cout << "My String is " << my_string << endl;
	cout << "My name is " << my_name << endl;

	cout << endl;

	for (int i = 0; my_name[i] != 0; i++) {
		cout << "My char is: " << my_name[i] << endl;
	}

	cout << endl;

	for (int i = 0; my_string[i] != 0; i++) {
		cout << "My char is: " << my_string[i] << endl;
	}

	cout << endl;

	for (int i = 0; my_name[i]; i++) {
		cout << "My char is: " << my_name[i] << endl;
	}

	cout << "part 2" << endl;

	for (char *cp = my_name; *cp != 0; cp++) {
		cout << "My char pointer is: " << *cp << endl;
	}

	cout << "part 3" << endl;

	for (char i : my_name) {

		if (i == 0) {
			break;
		}
		cout << "The char is: " << i << endl;
	}

	return 0;
}