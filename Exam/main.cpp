#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {

    vector<int> myv;
    myv.push_back(10);
    myv.push_back(6);

    myv.front() += myv.back();

    cout << myv.front() << "\n";
    

    return 0;
}