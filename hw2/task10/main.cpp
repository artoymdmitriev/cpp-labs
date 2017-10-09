#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int conversion_type, mark;
    cout << "Enter the type of conversion: 1 - (5->10); 2 - (10->5): ";
    cin >> conversion_type;
    cout << "Enter the mark: ";
    cin >> mark;

    switch(conversion_type) {
        case 1: cout << "Mark is: " << mark * 2 << endl;
            break;
        case 2: cout << "Mark is: " << mark / 2 << endl;
            break;
        default: cout << "Wrong type of conversion" << endl;
    }

    system("pause");
    return 0;
}
