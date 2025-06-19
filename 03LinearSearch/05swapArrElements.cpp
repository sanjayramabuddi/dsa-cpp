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
        swap(arr[start], arr[end]);

        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}