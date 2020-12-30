#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int main() {
    deque<int> mynums;

    mynums.push_back(20);
    mynums.push_front(10);
    mynums.push_front(30);
    mynums.push_front(40);

    cout << mynums.size() << endl;

    cout << mynums.at(2) << endl;

    mynums.pop_back();

    for(auto i : mynums) {
        cout << i << " ";
    }
    cout << "Outside the loop" << endl;

    return 0;
}