#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int life = 2;
	int points = 5;
	int score = 2;

	score += points;
	score -= points;
	score *= points;
	score /= points;
	score %= points;

	if (life != 5) {
		cout << "You into the if block" << endl;
	}

	return 0;
}