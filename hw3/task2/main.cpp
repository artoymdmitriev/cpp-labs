#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    number = abs(number);
    int sum = 0;
    while(number > 0) {
        sum += number % 10;
        number /= 10;
    }
    cout << "Sum is: " << sum;
    system("pause");
    return 0;
}

int abs(int num) {
    return num < 0 ? -num : num;
}