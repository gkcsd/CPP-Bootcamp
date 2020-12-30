#include <iostream>
#include <memory>
using namespace std;

class User {
public:
	User() {
		cout << "User created" << endl;
	}

	~User() {
		cout << "User destroyed" << endl;
	}

	void testFunction() {
		cout << "This is a test function\n";
	}

};

int main() {

	{
		// shared_ptr<User> tim(new User()); // again this is not right decsion and developers not use this methods
		//because it's creates a extra memory ie. stack as well as heap memory..

		shared_ptr<User> tim = make_shared<User>();
		tim->testFunction();

		weak_ptr<User> wtim = tim;

		shared_ptr<User> timm = tim; //  it is allowed in here..
	}

	return 0;
}