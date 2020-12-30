#include <iostream>

using namespace std;

int main() {

	bool isFbUser = false;

	bool isGoogleUser = true;

	bool isAdminIn = true;


	if ((isGoogleUser || isFbUser) && isAdminIn) {
		cout << "WelCome Admin" << endl;
	} else {
		cout << "Admin Access denied" << endl;
	}

	if (isFbUser || isGoogleUser) {
		cout << "WelCome user" << endl;
	}

	if (!(isFbUser || isGoogleUser)) {
		cout << "WelCome user" << endl;
	} else {
		cout << "Not Access" << endl;
	}

	return 0;
}