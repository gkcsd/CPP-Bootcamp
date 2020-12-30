#include <iostream>

using namespace std;

int main() {

	int my_numbers[] = {1, 2, 3, 4, 5, 6, 7};

	int i = 0;
	while(i < 7) {

		if(i == 3) {
			break;
		}
		
		cout << "Count number is: " << my_numbers[i] << endl;
		i++;

	}

	return 0;
}