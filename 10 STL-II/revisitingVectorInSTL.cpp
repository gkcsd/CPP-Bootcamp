#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    vector<int> nums;
    vector<string> heros {"Batman", "Superman", "Robin", "Spiderman"};

    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);
    nums.push_back(9);
    

    for (int i = 0; i <= 5; ++i) {
        nums.push_back(i);
    }

    cout << nums.size() << endl << nums.capacity() << endl << nums.max_size() << endl;

    cout << nums.empty() << endl;

    for (auto i = nums.begin(); i != nums.end(); ++i) {
        cout << *i << " ";
    }

    return 0;
}