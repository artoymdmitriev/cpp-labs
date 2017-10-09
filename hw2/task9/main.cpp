#include <iostream>

double abs(double);

using std::cin;
using std::cout;
using std::endl;

int main() {
    double r1, r2, r3, x, y;
    cout << "Enter r1, r2, r3: ";
    cin >> r1 >> r2 >> r3;
    cout << "Enter x, y: ";
    cin >> x >> y;

    x = abs(x);
    y = abs(y);

    if((x * x + y * y == r1 * r1) ||
            (x * x + y * y == r2 * r2) ||
            (x * x + y * y == r3 * r3)) {
        cout << "The point is in the 5th part" << endl;
    } else if(x * x + y * y < r1 * r1) {
        cout << "The point is in the 1st part" << endl;
    } else if(x * x + y * y < r2 * r2) {
        cout << "The point is in the 2nd part" << endl;
    } else if(x * x + y * y < r3 * r3) {
        cout << "The point is in the 3rd part" << endl;
    } else {
        cout << "The point is in the 4th part" << endl;
    }

    system("pause");
    return 0;
}

double abs(double arg) {
    if (arg < 0) {
        return -arg;
    } else {
        return arg;
    }
}