#include <iostream>
#include <string>
using namespace std;


class User {

	int secret = 22;

public:

	string name = "default";

	void classMessage();

	void setSecret(const int &new_secret) { secret = new_secret; }
	int getSecret()const { return secret; }

};

void User::classMessage() {

	cout << "This is the best name that is " << name << endl;
}


int main() {

	User sam;
	sam.name = "Pragati";
	sam.classMessage();


	sam.setSecret(252);
	cout << sam.getSecret() << endl;

	User Ganesh;
	Ganesh.classMessage();



	// const qualiefied methods or objects

	const User rock;
	rock.getSecret();
	cout << rock.getSecret() << endl;

	return 0;
}