#include <iostream>

using std::cout;
using std::endl;

int main() {
    int iVal, *piVal = &iVal;
    bool bVal, *pbVal = &bVal;
    double dVal, *pdVal = &dVal;

    int iVal2 = 10;
    *piVal = iVal2;

    cout << piVal << endl;
    cout << &piVal << endl;
    cout << iVal2 << endl;
    cout << &iVal2 << endl;
    cout << *piVal << endl;
    return 0;
}