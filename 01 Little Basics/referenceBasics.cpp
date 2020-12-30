#include <iostream>

using namespace std;

int main() {

	int score = 40;
	int *myp = &score;

	printf("The value of score is: %d\n", score);
	printf("The value of my pointer is: %p\n", myp);

	// reference

	int &anoter_score = score;
	anoter_score = 500;

	printf("The value of score after the reference is: %d\n", score);
	printf("The value of my pointer is: %p\n", myp);

	return 0;
}