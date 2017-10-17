#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    number = abs(number);
    int max = 0;
    while(number > 0) {
        max < number % 10 ? max = number % 10 : max;
        number /= 10;
    }
    cout << "Max number is: " << max << endl;
    system("pause");
    return 0;
}

int abs(int num) {
    return num < 0 ? -num : num;
}