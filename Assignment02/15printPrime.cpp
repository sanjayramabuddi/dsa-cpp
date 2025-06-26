#include <iostream>
using namespace std;

bool checkPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    for (int i = 2; i < number; i++)
    {
        bool value = checkPrime(i);
        if (value)
        {
            cout << i << " ";
        }
    }
}