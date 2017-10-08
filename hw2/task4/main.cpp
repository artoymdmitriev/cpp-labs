#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::min;
using std::max;
using std::system;

int main() {
    int a, b, c, num1, num2, num3;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    cout << "Sorting..." << endl;

    num1 = min(min(a, b), c);
    num3 = max(max(a, b), c);

    if(num1 != a && num3 != a) {
        num2 = a;
    } else if(num1 != b && num3 != b) {
        num2 = b;
    } else if(num1 != c && num3 != c) {
        num2 = c;
    }

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    system("pause");
    return 0;
}