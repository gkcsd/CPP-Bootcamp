#include <iostream>

using namespace std;

int main() {

	int rating;

	cout << "Enter the rating: " << endl;
	cin >> rating;

	if (rating == 5) {
		cout << "Heyy, thats a good rating" << endl;
	} else if (rating == 4) {
		cout << "this is good rated" << endl;
	} else if (rating == 3) {
		cout << "this is average rated" << endl;
	} else if (rating == 2) {
		cout << "sorry for trouble" << endl;
	} else if (rating == 1) {
		cout << "opps, Definitely we will improve soon" << endl;
	} else {
		cout << "Please give the rating between the 1 to 5" << endl;
	}
}