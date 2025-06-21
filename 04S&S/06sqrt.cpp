#include <iostream>
using namespace std;

int squareRoot(int num)
{
    int start = 0;
    int end = num;
    int mid = start + (end - start) / 2;
    int ans;

    while (start <= end)
    {
        if (mid * mid == num)
        {
            return mid;
        }
        else if (mid * mid > num)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter the number to find sqrt: ";
    cin >> num;

    int ans = squareRoot(num);
    cout << "Ans is " << ans << endl;

    // with precision

    double step = 0.1;
    double floatNum = ans;
    int precision;
    cout << "Enter the precision value: ";
    cin >> precision;

    for (int i = 0; i < precision; i++)
    {
        for (double j = floatNum; j * j <= num; j = j + step)
        {
            floatNum = j;
        }
        step = step / 10;
    }

    cout << "Ans with precision: " << floatNum << endl;
    return 0;
}