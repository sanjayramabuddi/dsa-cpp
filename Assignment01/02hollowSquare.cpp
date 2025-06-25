#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         if (i == 0 || i == n - 1)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout << "*";
//             }
//         }
//         else
//         {
//             cout << "*";
//             for (int k = 0; k < n - 2; k++)
//             {
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}