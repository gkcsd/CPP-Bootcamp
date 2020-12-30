#include <iostream>

using namespace std;

int main() {

	printf("Float size is: %ld bits\n", sizeof(float) * 8);
	printf("double size is: %ld bits\n", sizeof(double) * 8);
	printf("long double size is: %ld bits\n", sizeof(long double) * 8);


	cout << endl;

	float my_p_value = 20.212676546;

	if (my_p_value == 20.00001) {
		cout << "This is right\n";
	} else {
		cout << "This is wrong\n";
	}

	printf("My p value is: %f in float\n", my_p_value);

	cout << "my p value is " << my_p_value << endl;

	return 0;
}

