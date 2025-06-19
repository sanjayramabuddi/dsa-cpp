#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 5, 8, 10, 16, 7, 4, 3, 19};
    int size = 9;
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        if (arr[start] == arr[end])
        {
            cout << arr[start];
        }
        else
        {
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }

        start++;
        end--;
    }
    return 0;
}