#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 4, 5};
    vector<int> brr{6, 8, 9};
    vector<int> trr;

    for (int i = 0; i < arr.size(); i++)
    {
        trr.push_back(arr[i]);
    }

    for (int i = 0; i < brr.size(); i++)
    {
        trr.push_back(brr[i]);
    }

    for (int i = 0; i < trr.size(); i++)
    {
        cout << trr[i] << " ";
    }
    return 0;
}