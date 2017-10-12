#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int sum = 0;
    while(number > 0) {
        sum += number % 10;
        number /= 10;
    }
    cout << "Sum is: " << sum;
    return 0;
}