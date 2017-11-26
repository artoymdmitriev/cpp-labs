#include <iostream>

using std::cout;
using std::endl;

int main() {
    int iVal, *piVal = &iVal;
    bool bVal, *pbVal = &bVal;
    double dVal, *pdVal = &dVal;

    *piVal = 1;
    *pbVal = 1;
    *pdVal = 1;

    cout << iVal << endl;
    cout << bVal << endl;
    cout << dVal << endl;
    cout << endl;

    cout << &iVal << endl;
    cout << &bVal << endl;
    cout << &dVal << endl;
    cout << &endl;

    cout << *piVal << endl;
    cout << *pbVal << endl;
    cout << *pdVal << endl;
    return 0;
}