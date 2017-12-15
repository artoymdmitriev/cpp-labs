#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    Point p(3, 4);
    Point p2(5, 6);
    cout << "X: " << p.getX() << endl;
    cout << "Y: " << p.getY() << endl;
    cout << "d0 distance: " << p.d0() << endl;
    cout << "Distance between p1 and p2: " << p.d(p2) << endl;
    cout << p << endl;
    cout << "Enter x and y for point: " << endl;
    cin >> p;
    return 0;
}