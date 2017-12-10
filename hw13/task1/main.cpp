#include <iostream>

double powRec(int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << powRec(-2) << endl;
    return 0;
}

double powRec(int power) {
    if(power > 0) {
        return 2 * powRec(--power);
    } else if(power < 0) {
        return 0.5 * powRec(++power);
    } else {
        return 1;
    }
}