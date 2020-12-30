#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main() {

    list<int> myList;
    
    for (int i = 3; i <= 10; ++i) {
        myList.push_back(i);
    }

    cout << myList.front() << endl;
    cout << myList.back() << endl;

    myList.pop_back();

    myList.reverse();
    for (int i : myList) {
        cout << i << " ";
    }

    cout <<endl;

    myList.sort();
    for (int i : myList) {
        cout << i << " ";
    }

    return 0;
}