#include <iostream>

using namespace std;


enum MsOfficie : uint8_t {
	BOLD = 2,
	ITALICS = 4,
	UNDERLINED = 8,
	CROSSED = 16

};


int main() {

	int myAttributes = UNDERLINED;


	cout << myAttributes << endl; //2
	//for bold is 0 and italic is 1 and its increament


	return 0;
}