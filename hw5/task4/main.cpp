#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a, b;
    cout << "Enter A and B" << endl;
    cin >> a >> b;
    cout << "Asc" << endl;
    for(int i = a + 1; i < b; i++) cout << i << endl;
    cout << "Desc" << endl;
    for(int i = b - 1; i > a; i--) cout << i << endl;
    return 0;
}