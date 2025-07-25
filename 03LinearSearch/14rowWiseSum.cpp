#include <iostream>
using namespace std;

void printRowSum(int arr[3][3], int rows, int cols)
{
    cout << "Printing row sum: ";
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
}

void printColSum(int arr[3][3], int rows, int cols)
{
    cout << "Printing cols sum: ";
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
    }
}

int main()
{
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Printing row wise: " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Printing col wise: " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    printRowSum(arr, rows, cols);
    printColSum(arr, rows, cols);
    return 0;
}