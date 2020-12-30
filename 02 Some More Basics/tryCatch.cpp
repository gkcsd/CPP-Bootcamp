#include <iostream>

using namespace std;

int main() {

	int call_API = 20;

	try {
		cout << "Trying to use API value" << endl;
		cout << "Did some testing with API value" << endl;

		throw call_API;
		cout << "This code is not running" << endl;
	} catch (int x) {
		cout << "Integer exception handled" << endl;
	} catch (float f) {
		cout << "Float exception handled" << endl;
	} catch (...) {
		cout << "Something went wrong" << endl;
	}

	cout << "Keep on moving with rest of code" << endl;

	return 0;
}