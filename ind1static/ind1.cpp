#include <iostream>
#include "ind1.hpp"
using namespace std;

void matrixBC(int size, int **&arrayB, int **&arrayC)
{
    cout << "Enter massiv B, size " << size << "*" << size << ":" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arrayB[i][j];
        }
    }

    cout << "Massiv B: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arrayB[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter massiv C, size " << size << "*" << size << ":" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arrayC[i][j];
        }
    }

    cout << "Massiv C: " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arrayC[i][j] << " ";
        }
        cout << endl;
    }
}

void matrixA(int size, int **&arrayA, int **&arrayB, int **&arrayC)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (abs(arrayB[i][j]) > abs(arrayC[i][j]))
                arrayA[i][j] = arrayB[i][j];
            else
                arrayA[i][j] = arrayC[i][j];
        }
    }

    cout << "Massiv A:" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arrayA[i][j] << " ";
        }
        cout << endl;
    }
}

