#include <iostream>

using std::cout;
using std::endl;

int main() {
    int iVal = 1, *piVal = &iVal;
    bool bVal = 1, *pbVal = &bVal;
    double dVal = 1, *pdVal = &dVal;

    cout << iVal << endl;
    cout << bVal << endl;
    cout << dVal << endl;

    cout << piVal << endl;
    cout << pbVal << endl;
    cout << pdVal << endl;

    return 0;
}