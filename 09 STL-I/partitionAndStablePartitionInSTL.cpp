#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> myint = { 4,2,58,46,9,3,75,8,22};

    for (int x : myint) {
        cout << x << " ";
    }

    cout << endl;

    partition(myint.begin(), myint.end(), [](auto x) { return x%2 == 0;});

    for (int x : myint) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}