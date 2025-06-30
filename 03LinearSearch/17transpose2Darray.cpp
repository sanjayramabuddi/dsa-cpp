#include <iostream>
using namespace std;

void transpose(int arr[][3], int rows, int cols, int dupArr[][3])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            dupArr[j][i] = arr[i][j];
        }
    }
}

void printArray(int dupArr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << dupArr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    int dupArr[3][3];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    transpose(arr, rows, cols, dupArr);
    printArray(dupArr, rows, cols);
}