//1. Перепишите данный код таким образом, чтобы
//1) соблюсти единообразия стиля именования переменных
//2) функция print для матрицы вызывала функцию print для массива
//3) при каждом запуске генерировался новый набор значений для матриц и массивов
//        Напишите комментарии к коду

#include <iostream>
#include <iomanip>

const int columns = 10;

int  digitQ(int);
int  digitQMatr(int[][columns], int);

int  rand1();
int  rand2();
int  rand3();

void load(int[][columns], int, int(*)());
void load(int[], int, int(*)());

void print(int[][columns], int);
void print(int[], int);

int main() {
    srand(time(NULL));
    const int size = 8;
    int arr[size];
    int arr2D[size][columns];

    //array work
    load(arr, size, &rand2);
    print(arr, size);
    load(arr, size / 2, &rand1);
    load(&arr[size / 2], size / 2, &rand3);
    print(arr, size);

    //matr work
    load(arr2D, size, &rand3);
    print(arr2D, size);

    load(arr2D, size, &rand1);
    print(arr2D, size);

    load(arr2D, size / 2, &rand2);
    print(arr2D, size);
}

/*
 * Counts the number of digits in number
 * */
int digitQ(int num) {
    int k = 1;
    while((num /= 10) != 0) k++;
    return k;
}

/*
 * Counts the number of digits in the longest number in matrix
 * */
int digitQMatr(int C[][columns], int n) {
    int k = 1;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < columns; j++)
            if(k < digitQ(C[i][j]))
                k = digitQ(C[i][j]);
    return k;
}

/*
 * Creates a random number between 0 and 99
 * */
int rand1() {
    return std::rand() % 100;
}

/*
 * Creates a random number between 0 and 9999
 * */
int rand2() {
    return std::rand() % 10000;
}

/*
 * Creates a random number that can be either positive or
 * negative
 * */
int rand3() {
    return std::rand() - std::rand();
}

/*
 * Loads integers into an array
 * */
void load(int array[], int n, int(*f)()) {
    for(int i = 0; i < n; i++)
        array[i] = f();
}

/*
 * Loads integers into a matrix
 * */
void load(int matrix[][columns], int n, int(*f)()) {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < columns; j++)
            matrix[i][j] = f();
}

//void load(int A[][columns], int n, int(*f)()) {
//    for(int i=0; i<n; i++)
//       load(A[i], columns, f);
//}

/*
 * Prints a matrix of integers
 * */
void print(int matrix[][columns], int rows) {
    for(int i = 0; i < rows; i++) {
        print(matrix[i], columns);
    }
    std::cout << std::endl;
}

/*
 * Prints an array of integers
 * */
void print(int array[], int length) {
    for(int i = 0; i < length; i++)
        std::cout << array[i] << ' ';
    std::cout << std::endl;
}