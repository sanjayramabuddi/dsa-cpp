#include <iostream>
using namespace std;

void minElement(int arr[][4], int rows, int cols)
{
    int min = __INT_MAX__;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }
    cout << "Minimum element in 2D array: " << min << endl;
}

void maxElement(int arr[][4], int rows, int cols)
{
    int max = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    cout << "Maximum element in 2D array: " << max << endl;
}

int main()
{
    int arr[3][4];
    int rows = 3;
    int cols = 4;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    minElement(arr, rows, cols);
    maxElement(arr, rows, cols);
}