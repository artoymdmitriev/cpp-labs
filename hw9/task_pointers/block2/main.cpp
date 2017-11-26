#include <iostream>

using std::cout;
using std::endl;

int main() {
    int iVal, *piVal = &iVal;
    bool bVal, *pbVal = &bVal;
    double dVal, *pdVal = &dVal;

    cout << piVal << endl;
    cout << pbVal << endl;
    cout << pdVal << endl;

    cout << &piVal << endl;
    cout << &pbVal << endl;
    cout << &pdVal << endl;

    cout << *piVal << endl;
    cout << *pbVal << endl;
    cout << *pdVal << endl;
    return 0;
}