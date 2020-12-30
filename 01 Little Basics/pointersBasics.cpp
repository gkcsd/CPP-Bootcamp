#include <iostream>

using namespace std;

int main() {

	int life;
	life = 40;

	int card;
	card = 400;
	int my_card = card;

	int *myp;
	myp = &card;

	my_card = *myp; // pointer dereference

	printf("The value of my card is: %d\n", my_card);
	printf("The value of my pointer is: %p\n", myp );
	printf("The value of my card after the dereference: %d\n", my_card);

	return 0;
}