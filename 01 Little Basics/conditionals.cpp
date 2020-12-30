#include <iostream>
#include <string>

using namespace std;

int main() {

	int rating = 4;

	if (rating == 5) {
		cout << "rating is five" << endl;
	} else if (rating == 4) {
		cout << "rating is four" << endl;
	} else {
		cout << "Not 4 or 5 rated" << endl;
	}

	cout << endl;

	string condition = (rating > 4) ? "greater than four" : "less than four";

	cout << "The rating is " << condition << endl;

	return 0;
}