#include <iostream>
#include <cmath>

int reverse_number(int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if(num < 0) {
        cout << "Negative number can't be a palindrome!" << endl;
        system("pause");
        return 0;
    }

    if(num == reverse_number(num)) {
        cout << "It's a palindrome!" << endl;
    } else {
        cout << "No, it\'s not a palindrome!" << endl;
    }

    system("pause");
    return 0;
}

int reverse_number(int num) {
    int reversed_num = 0;
    while(num > 0) {
        reversed_num *= 10;
        reversed_num += num % 10;
        num /= 10;
    }
    return reversed_num;
}