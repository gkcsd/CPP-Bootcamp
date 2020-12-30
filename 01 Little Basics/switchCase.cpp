#include <iostream>

using namespace std;

int main() {

	int rating = 3;

	switch (rating) {
	case 1:
		cout << "rated as 1" << endl;
		break;
	case 2:
		cout << "rated as 2" << endl;
		break;
	case 3:
		cout << "rated as 3" << endl;
		break;
	case 4:
		cout << "rated as 4" << endl;
		break;
	case 5:
		cout << "rated as 5" << endl;
		break;
	default:
		cout << "Please give the rating between 1 and 5" << endl;
		break;
	}

	return 0;

}