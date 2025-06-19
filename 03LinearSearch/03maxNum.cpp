#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 5, 8, 10, 16, 7, 4, 3};
    int size = 8;
    int maxNum = INT8_MIN;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }
    cout << "Max number is: " << maxNum;
    return 0;
}
