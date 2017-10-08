#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main() {
    double a, b, c;
    cout << "Enter coefficients: " << endl;
    cin >> a >> b >> c;

    double discriminant = (b * b) - (4 * a * c);
    if(discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "x1 = " << x1 << "; x2 = " << x2 << endl;
    } else if(discriminant == 0) {
        double x = -b / (2 * a);
        cout << "x1,2 = " << x << endl;
    } else {
        cout << "There are no roots" << endl;
    }

    system("pause");
    return 0;
}