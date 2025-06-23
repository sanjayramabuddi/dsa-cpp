#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 1, 3, 3, 5, 6, 6};
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    cout << "Ans is: " << ans;
    return 0;
}