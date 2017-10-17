#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    int max = 0;
    while(number > 0) {
        max < number % 10 ? max = number % 10 : max;
        number /= 10;
    }
    cout << "Max number is: " << max;
    system("pause");
    return 0;
}