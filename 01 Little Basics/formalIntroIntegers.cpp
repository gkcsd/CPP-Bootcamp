#include <iostream>
#include <cstdint>

using namespace std;

int main() {

	// 1 byte is of 8 bits

	printf("The size of int is %ld bits \n", sizeof(int) * 8);
	printf("The size of short int is %ld bits \n", sizeof(short int) * 8);
	printf("The size of long int is %ld bits \n", sizeof(long int) * 8);
	printf("The size of long long int is %ld bits \n", sizeof(long long int) * 8);

	cout << endl;

	printf("The size of int is %ld bits \n", sizeof(int32_t) * 8);
	printf("The size of short int is %ld bits \n", sizeof(int16_t) * 8);
	printf("The size of long int is %ld bits \n", sizeof(int64_t) * 8);
	printf("The size of long long int is %ld bits \n", sizeof(int64_t) * 8);

	cout << endl;

	printf("The size of int is %ld bits \n", sizeof(uint32_t) * 8);
	printf("The size of short int is %ld bits \n", sizeof(uint16_t) * 8);
	printf("The size of long int is %ld bits \n", sizeof(uint64_t) * 8);
	printf("The size of long long int is %ld bits \n", sizeof(uint64_t) * 8);

	cout << endl;

	int fun = 0b011000;
	cout << fun << endl;

	int fun2 = 0x10;
	cout << fun2 << endl;


	return 0;
}