#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    if(number % 2 == 0) {
        cout << "The number is even.";
    } else {
        cout << "The number is odd.";
    }
    cout << endl;
    system("pause");
    return 0;
}