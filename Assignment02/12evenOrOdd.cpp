#include <iostream>
using namespace std;

bool evenOdd(int num)
{
    // if (num % 2 == 0)
    if (num & 1 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    bool value = evenOdd(number);

    if (value)
    {
        cout << number << " is even number" << endl;
    }
    else
    {
        cout << number << " is odd number" << endl;
    }
}