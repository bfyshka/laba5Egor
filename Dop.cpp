/*
№3 vt 2;
*/

#include <iostream>

using namespace std;

void matrix(int lines, int columns, double **&array)
{
    cout << "Enter the matrix:" << endl;
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> array[i][j];
        }
    }
}

void zero(int lines, int columns, double **&array)
{
    int zero = 0;
    cout << "Zero:" << endl;
    for (int i = 0; i < lines; i++)
        for (int j = 0; j < columns; j++)
        {
            if (array[i][j] == 0)
            {
                zero++;
                cout << "line: " << i + 1 << " column: " << j + 1 << endl;
            }
        }
    cout << "Zero count: " << zero << endl; 
}

void swapp(int lines, int columns, double **&array)
{
    cout << "swapped matrix: " << endl;
    for (int i = lines-1; i >=0; i--)
    {
        for (int j = columns - 1; j >=0; j--)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
        
}

int main()
{
    cout << "Enter sizes of the matrix: ";
    int lines, columns;
    cin >> lines >> columns;

    double **array = new double * [lines];
    for(int i = 0; i < lines; i++)
        array[i] = new double [columns];

    matrix(lines,  columns, array); 
    zero(lines,  columns, array);
    swapp(lines,  columns, array);  

    for (int i = 0; i < lines; i++)
        delete[] array[i];
    delete[] array;
}