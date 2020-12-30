#include <iostream>
#include <string>

using namespace std;


string api_call() {

	return "Fetch the information from web";
}

int another_api_call() {

	return 5;
}

int main() {

	//string response = api_call();
	auto response = api_call(); // auto is not datatype its recognize the actual type of data
	auto res = another_api_call();

	cout << "The Api Call Is: " << response << endl;
	cout << "The another api call is: " << res << endl;

	if (typeid(response) == typeid(string)) {
		cout << "Type of both id is matches" << endl;
	}

	if (typeid(res) == typeid(int)) {
		cout << "Type of both id is matches" << endl;
	}

	return 0;
}