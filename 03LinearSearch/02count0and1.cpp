#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 0, 0, 1, 0, 0, 0, 1};
    int size = 9;
    int zero = 0;
    int one = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    cout << "Total number of zero is: " << zero << endl;
    cout << "Total number of one is: " << one;
    return 0;
}
