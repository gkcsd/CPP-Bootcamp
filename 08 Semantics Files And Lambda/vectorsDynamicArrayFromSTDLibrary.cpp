#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Corners {
    double a,b,c,d;
};

ostream& operator<<(ostream& stream, const Corners& var) {
    stream << var.a << " " << var.b << " " << var.c << " " << var.d << endl;
    return stream;
}

int main() {

    vector<int> integ;
    integ.push_back(1);
    integ.push_back(2);
    integ.push_back(3);
    integ.push_back(4);

    for (auto i = integ.begin(); i != integ.end(); ++i) {
        cout << *i << endl;
    }

    cout <<endl;

    vector<Corners> corners;
    corners.push_back({1,2,3,4});
    corners.push_back({5,6,7,8});

    for (int i = 0; i < corners.size(); ++i) {
        cout << corners[i] << endl;
    }

    return 0;
}