#include <iostream>
#include <string>
using namespace std;

class User {

	int _secret = 22;

public:
	string name = "default";

	void classMessage() { cout << "The name of class message is: " << name << endl; }
	void setSecret( const int &new_secret) { _secret = new_secret; }			//Here const said as protection layer in int &new_secret
	int getSecret() { return _secret; }

};

int main() {

	User sam;
	sam.name = "Pragati";
	sam.classMessage();

	sam.setSecret(398);

	cout << sam.getSecret() << endl;



	User Ganesh;
	Ganesh.classMessage();

	return 0;
}