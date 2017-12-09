#include <iostream>
#include <ctime>

int firstLength;
int secondLength;

using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << "Enter the length of the first array: ";
    cin >> firstLength;
    int *array = new int[firstLength];
    cout << "Enter the values of the array: ";
    for(int i = 0; i < firstLength; i++) {
        cin >> array[i];
    }
    cout << "Enter the length of the second array: ";
    cin >> secondLength;

    int *newArray = new int[secondLength];
    for(int i = 0; i < secondLength; i++) {
        if(i < firstLength) {
            newArray[i] = array[i];
        } else {
            newArray[i] = 0;
        }
    }

    cout << "Second array: ";
    for(int i = 0; i < secondLength; i++) {
        cout << newArray[i] << ' ';
    }
    delete[] array;
    
    system("pause");
    return 0;
}