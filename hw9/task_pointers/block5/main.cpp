#include <iostream>

using std::cout;
using std::endl;

int main() {
    int iVal = 0, *piVal = &iVal;
    bool bVal = 0, *pbVal = &bVal;
    double dVal = 0, *pdVal = &dVal;

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