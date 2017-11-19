#include <iostream>

void fillArray(int*, int);
int minValue(int*, int);
int maxValue(int*, int);
int secondMinValue(int*, int, int);
int findOccurances(int*, int, int);
bool checkArrayForRepetitions(int*, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    const int length = 5;
    int array[length];
    fillArray(array, length);

    int min = minValue(array, length);
    cout << "Min value is: " << min << " it occurs " << findOccurances(array, length, min) << " time(s)." << endl;
    if(checkArrayForRepetitions(array, length)) {
        int secondMin = secondMinValue(array, length, min);
        cout << "Second min value is: " << secondMin << " it occurs " << findOccurances(array, length, secondMin) << " time(s)." << endl;
    }
    system("pause");
    return 0;
}

void fillArray(int* array, int length) {
    cout << "Enter " << length << " numbers: ";
    for(int i = 0; i < length; i++) {
        cin >> array[i];
    }
}

int minValue(int *array, int length) {
    int min = array[0];
    for(int i = 1; i < length; i++) {
        if(array[i] < min) min = array[i];
    }
    return min;
}

int maxValue(int *array, int length) {
    int max = array[0];
    for(int i = 1; i < length; i++) {
        if(array[i] > max) max = array[i];
    }
    return max;
}


int secondMinValue(int *array, int length, int min) {
    int secondMin = maxValue(array, length);
    for(int i = 0; i < length; i++) {
        if(secondMin > array[i] && min < array[i]) {
            secondMin = array[i];
        }
    }
    return secondMin;
}

int findOccurances(int* array, int length, int number) {
    int occurances = 0;
    for(int i = 0; i < length; i++) {
        if(array[i] == number) occurances++;
    }
    return occurances;
}

bool checkArrayForRepetitions(int* array, int legnth) {
    int val = array[0];
    for(int i = 1; i < legnth; i++) {
        if(array[i] != val) {
            return true;
        }
    }
    return false;
}