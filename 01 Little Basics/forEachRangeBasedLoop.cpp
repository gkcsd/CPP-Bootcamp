#include <iostream>

using namespace std;

int main() {

	int my_nums[] = {2, 3, 4, 5, 6, 7};

	for (int i : my_nums) {

		if (i == 3) { // not a counter value its a real value
			break;
		}
		cout << i << endl;
	}

	return 0;
}