#include <iostream>
#include <algorithm>
#include <forward_list>
using namespace std;

int main() {

    forward_list<int> forwardList;

    forwardList.push_front(10);
    forwardList.push_front(20);
    forwardList.push_front(30);
    forwardList.push_front(40);
    forwardList.push_front(50);

    forwardList.pop_front();

    for (auto i : forwardList) {
        cout << i << " ";
    }
    cout << endl;

    forwardList.sort();
    cout << "After sorting the given elements: " << endl;
    for (auto i = forwardList.begin(); i != forwardList.end(); ++i) {
        cout << *i << " ";
    }
    cout << endl;

    forwardList.reverse();
    cout << "After reversing the list: " << endl;
    for (auto i : forwardList) {
        cout << i << " ";
    }
    cout << endl;

    forwardList.insert_after(forwardList.begin(),{1,2,3,4});
    cout << "After adding the values: " << endl;
    for (auto i : forwardList) {
        cout << i << " ";
    }
    cout << endl;

    forwardList.erase_after(forwardList.begin());
    cout << "After erasing the value: " << endl;
     for (auto i : forwardList) {
        cout << i << " ";
    }
    cout << endl;



    return 0;
}