#include <iostream>
#include <string>
#include <memory>
using namespace std;

class User {
public:
	User() {
		cout << "User Created" << endl;
	}
	~User() {
		cout << "User Destroyed" << endl;
	}

	void testFunction() {
		cout << "I am a test function" << endl;
	}
};

int main() {

	{
		// unique_ptr<User> sam(new User()); // This is not use by developer..

		unique_ptr<User> sam = make_unique<User>();
		sam->testFunction();

		// unique_ptr<User> samm = sam; // this is not allowed..
	}

	cout << "outside the code" << endl;



	return 0;
}