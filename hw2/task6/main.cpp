#include <iostream>

using namespace std;
int main() {
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    cout << "Max number is: " << max(min(a, b), c) << endl;
    system("pause");
    return 0;
}