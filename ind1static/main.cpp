/*
№1 Вариант 13
*/

#include <iostream>
#include "ind1.hpp"

using namespace std;

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    int **arrayA = new int *[size];
    for (int i = 0; i < size; i++)
        arrayA[i] = new int[size];

    int **arrayB = new int *[size];
    for (int i = 0; i < size; i++)
        arrayB[i] = new int[size];

    int **arrayC = new int *[size];
    for (int i = 0; i < size; i++)
        arrayC[i] = new int[size];

    matrixBC(size, arrayB, arrayC);
    matrixA(size, arrayA, arrayB, arrayC);

    for (int i = 0; i < size; i++)
        delete[] arrayA[i];
    delete[] arrayA;
    for (int i = 0; i < size; i++)
        delete[] arrayC[i];
    delete[] arrayC;
    for (int i = 0; i < size; i++)
        delete[] arrayB[i];
    delete[] arrayB;
}