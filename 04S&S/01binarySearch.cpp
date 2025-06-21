#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 5, 7, 8, 10, 12, 15, 20};
    int target = 15;
    int size = 8;
    // int size = sizeof(arr) / sizeof(arr[0]);

    int indexOfArray = binarySearch(arr, size, target);

    if (indexOfArray == -1)
    {
        cout << "Element not found" << endl;
    }
    else
    {
        cout << "Element found at index " << indexOfArray << endl;
    }
    return 0;
}