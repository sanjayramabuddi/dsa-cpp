#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 5, 8, 10, 16, 7, 4, 3};
    int size = 8;
    int target = 44;
    int flag = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        cout << "Element found";
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}
