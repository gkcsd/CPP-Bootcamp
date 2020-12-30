#include <iostream>
#include <string>
using namespace std;

int main() {

    []{ cout << "This is codeBucketWebsite" << endl;}();

    [](){ return 100;};

    auto sum = [](auto a, auto b){return a+b;};
    cout << "The sum of 5 and 10 is: " << sum(5,10) << endl;

    string a = "Ganesh ";
    string b = "Kale";

    cout << sum(a,b) << endl;

    return 0;
}
