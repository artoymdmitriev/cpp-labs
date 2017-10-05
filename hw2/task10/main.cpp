#include <iostream>

int conv5to10(int);
int conv10to5(int);

using namespace std;
int main() {
    int a, b;
    cout << "Enter the type of conversion: 1 - (5->10); 2 - (10->5): ";
    cin >> a;
    cout << "Enter the mark: ";
    cin >> b;
    if(a == 1) {
        cout << "Mark is: " << conv5to10(b) << endl;
    } else if(a == 2) {
        cout << "Mark is: " << conv10to5(b) << endl;
    }

    return 0;
}

int conv5to10(int mark) {
    switch(mark) {
        case 1: return 2;
        case 2: return 4;
        case 3: return 6;
        case 4: return 8;
        case 5: return 10;

    }
}

int conv10to5(int mark) {
    switch(mark) {
        case 1:
        case 2: return 1;
        case 3:
        case 4: return 2;
        case 5:
        case 6: return 3;
        case 7:
        case 8: return 4;
        case 9:
        case 10: return 5;
    }
}
