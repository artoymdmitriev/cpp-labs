#include <iostream>
#include <cmath>

double step(double, double, double);

using std::cin;
using std::cout;
using std::endl;

int main() {
    double a, u, v, n, x;
    cout << "Enter a, u, v, n: ";
    cin >> a >> u >> v >> n;
    x = u;
    while(x < v) {
        cout << "x: " << x << " ";
        cout << "y: " << 2 * sin(a + x) << endl;
        x += step(u, v, n);
    }
    system("pause");
    return 0;
}

double step(double u, double v, double n) {
    return (v - u) / (n - 1);
}