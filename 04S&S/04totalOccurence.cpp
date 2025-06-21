#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
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
    return ans;
}

int lastOcc(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
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
    return ans;
}

int totalOcc(vector<int> arr, int target)
{
    int first = firstOcc(arr, target);
    int last = lastOcc(arr, target);

    if (first == -1 || last == -1)
    {
        return 0;
    }

    return last - first + 1;
}

int main()
{
    vector<int> arr{1, 3, 4, 5, 5, 5, 7, 8, 10, 12, 15, 15, 15, 15, 15, 20};
    int target = 15;

    int finalRes = totalOcc(arr, target);
    cout << "Total number of occurence is " << finalRes << endl;
    return 0;
}