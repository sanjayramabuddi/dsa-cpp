#include <iostream>
using namespace std;

bool findElement(int arr[][4], int rows, int cols, int target)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
                return true;
        }
    }
    return false;
}

int main()
{
    int arr[3][4];
    int rows = 3;
    int cols = 4;
    int target = 56;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    int ans = findElement(arr, rows, cols, target);
    if (ans)
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element not found";
    }
}