#include <iostream>

using namespace std;

int main() {

	int my_nums[] = {2, 4, 5, 6, 7};

	for (int i = 0; i < 5; i++) {

		if (i == 2) {
			continue;
		}
		cout << my_nums[i] << endl;
	}

	return 0;
}