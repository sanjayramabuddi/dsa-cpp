#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 4, 2, 5};
    vector<int> brr{5, 2, 9, 2};
    vector<int> trr;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])
            {
                trr.push_back(arr[i]);
                // brr[i] = -1;
                break;
            }
        }
    }

    for (int i = 0; i < trr.size(); i++)
    {
        cout << trr[i] << " ";
    }
    return 0;
}