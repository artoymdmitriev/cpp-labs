#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main() {
    double r1, r2, r3, x, y, absX, absY;
    cout << "Enter r1, r2, r3: ";
    cin >> r1 >> r2 >> r3;
    cout << "Enter x, y: ";
    cin >> x >> y;

    absX = fabs(x);
    absY = fabs(y);

    if(absX == r1 && absY == r1 ||
            absX == r2 && absY == r2 ||
            absX == r3 && absY == r3) {
        cout << "The point is in the 5th part" << endl;
    } else if(absX < r1 && absY < r1) {
        cout << "The point is in the 1st part" << endl;
    } else if(absX < r2 && absY < r2) {
        cout << "The point is in the 2nd part" << endl;
    } else if(absX < r3 && absY < r3) {
        cout << "The point is in the 3rd part" << endl;
    } else if(absX > r3 || absY > r3) {
        cout << "The point is in the 4th part" << endl;
    }
    system("pause");
    return 0;
}