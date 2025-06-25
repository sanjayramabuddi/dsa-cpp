#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{10, 20, 30, 40, 50, 60, 70, 80, 90};
    int findSum = 90;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == findSum)
            {
                cout << "The pair is: " << arr[i] << ", " << arr[j] << endl;
            }
        }
    }
}