#include <iostream>
#include "ind2.hpp"

using namespace std;

void matrix(int lines, int *array)
{
    cout << "Enter Matrix:" << endl;
    for (int i = 0; i < lines; i++)
        cin >> array[i];

    cout << "Massiv: " << endl;
    for (int i = 0; i < lines; i++)
        cout << array[i] << " ";
    cout << endl;
}

int recurs(int n, int *array, int left, int right)
{
    if (left == right)
    {
        if (array[left] < 0)
            return 1;
        return 0;
    }
    int mid = left + right;
    mid /= 2;
    return recurs(n, array, left, mid) + recurs(n, array, mid + 1, right);
}