#include <iostream>
#include <string>
using namespace std;

class User {
	int secret = 22;

public:
	string name = "Geeta";
	void message() { cout << "This is message: " << name << endl;}
	void setSecret(const int &newSceret) {secret = newSceret;}
	int getSecret() { return secret;}
};

int main() {
	User sam;
	sam.message();
	sam.getSecret();
	sam.setSecret(333);
	cout << sam.getSecret() << endl;
	return 0;
}