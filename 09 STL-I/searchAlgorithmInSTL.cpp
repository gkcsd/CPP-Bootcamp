#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    float numbers[6] = {5.5,6.8,1.1,2.4,48.65,100.0};

    cout << "Unsorted array: " << endl;
    for (float n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    sort(numbers, numbers+6);

    if (binary_search(numbers, numbers+6, 100.0)) {
        cout << "NUMBER FOUND" << endl;
    } else {
        cout << "NUMBER NOT FOUND" << endl;
    }

    cout << "Sorted Array: " << endl;
    for (float n : numbers) {
        cout << n << " ";
    }

    return 0;
}