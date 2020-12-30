#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {

    queue<int> myq;

    myq.push(10);
    myq.push(11);
    myq.push(12);
    myq.push(13);

    cout << myq.front() << endl;
    cout << myq.back() << endl;

    myq.pop();
    cout << myq.front()<< endl;

    while (!(myq.empty())) {
        cout << " " << myq.front();
        myq.pop();
    }
    cout << endl;
    cout << "OUTSIDE" << endl;

    cout << myq.front() << endl;

    cout << "...................................................." <<endl;

    priority_queue<int> mypq;

    mypq.push(10);
    mypq.push(20);
    mypq.push(50);
    mypq.push(5);

    while (!(mypq.empty())) {
        cout << " " << mypq.top();
        mypq.pop();
    }
    cout << endl;


    return 0;
}