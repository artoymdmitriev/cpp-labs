#include <iostream>

using std::cout;
using std::endl;

int main() {
    int iVal, *piVal = &iVal;
    bool bVal, *pbVal = &bVal;
    double dVal, *pdVal = &dVal;

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