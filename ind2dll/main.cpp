/*
№2 Вариант 14
*/

#include <iostream>
#include "ind2.hpp"

using namespace std;

int main()
{
    cout << "Enter size: ";
    int n;
    cin >> n;

    int const lines = n;
    int *array = new int[lines];

    matrix(lines, array);
    cout << recurs(n, array, 0, n - 1);
}