#include <iostream>

using namespace std;

int main() {

	int my_number[] = {1, 2, 3, 4, 5, 6, 7};

	int i = 0;
	while (i < 7) {
		if (i == 3) {
			i++;
			cout << "wow, Awesome.." << endl;
			continue;
		}
		cout << "The count is: " << my_number[i] << endl;
		i++;
	}
	return 0;
}