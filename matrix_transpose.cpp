#include <iostream>
using namespace std;

int main()
{
    int a[10][10], transpose[10][10], row, column, i, j;

    cout << "Enter rows and columns of matrix: ";
    cin >> row >> column;
    cout << "Enter elements of matrix: " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "Enter element a" << i + 1 << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    cout << "Entered Matrix" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    cout << "Transposed Matrix" << endl;
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}