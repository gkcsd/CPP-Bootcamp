#include <iostream>


struct User {

	const int Id;
	int age;

User: id(001), age(22) {}
};


int main() {
	using namespace std;

	//stack
	int score = 100;
	User mike;

	//heap

	int* heap_score = new int;
	*heap_score = 200; // pointer dereference

	User* nike = new User;

	// if we declare new keyword here then it must to delete this space

	delete heap_score;
	delete nike;

	return 0;
}