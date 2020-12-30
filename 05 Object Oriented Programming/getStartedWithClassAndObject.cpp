#include <iostream>
#include <string>
using namespace std;


class User {

	int secret = 22;

public:

	string name = "default";

	void classMessage() {

		cout << "The name in classMessage is, " << name << endl;
	}
};


int main() {

	User sam;
	sam.name = "Pragati";
	sam.classMessage();


	User Ganesh;
	Ganesh.classMessage();
	Ganesh.name = "Ganesh";
	Ganesh.classMessage();

	return 0;
}