#include <iostream>
#include <cmath>

double step(double, double, double);
double calc_y(double, double);

using std::cin;
using std::cout;
using std::endl;

int main() {
    double a, u, v, n;
    cout << "Enter a, u, v, n: ";
    cin >> a >> u >> v >> n;
    while(u < v) {
        cout << calc_y(a, u) << endl;
        u += step(u, v, n);
    }
    system("pause");
    return 0;
}

double step(double u, double v, double n) {
    return (v - u) / (n - 1);
}

double calc_y(double a, double x) {
    return 2 * sin(a + x);
}