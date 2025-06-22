#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1;
            if (i != j)
                cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            cout << num - i;
            if (j != num - i - 1)
                cout << "*";
        }
        cout << endl;
    }
}