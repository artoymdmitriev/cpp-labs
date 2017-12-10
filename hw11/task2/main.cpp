//2. Напишите функцию для изменения длины ДРМ, которая
//1) выделяет новый участок памяти подходящей длины
//2) копирует в него данные из старого участка. Если данных не хватает, то заполняет оставшийся участок нулями
//3) освобождает старый участок памяти

#include <iostream>
#include <ctime>

int* createNewArray(int*, int, int);

using std::cin;
using std::cout;
using std::endl;

int main() {
    int firstLength;
    cout << "Enter the length of the first array: ";
    cin >> firstLength;
    int *array = new int[firstLength];
    cout << "Enter the values of the array: ";
    for(int i = 0; i < firstLength; i++) {
        cin >> array[i];
    }

    int secondLength;
    cout << "Enter the length of the second array: ";
    cin >> secondLength;

    int *newArray = createNewArray(array, firstLength, secondLength);
    cout << "Second array: ";
    for(int i = 0; i < secondLength; i++) {
        cout << newArray[i] << ' ';
    }
    cout << endl;
    delete[] array;

    system("pause");
    return 0;
}

int* createNewArray(int* array, int oldArrayLength, int newArrayLength) {
    int *newArray = new int[newArrayLength];
    for(int i = 0; i < newArrayLength; i++) {
        if(i < oldArrayLength) {
            newArray[i] = array[i];
        } else {
            newArray[i] = 0;
        }
    }
    return newArray;
}