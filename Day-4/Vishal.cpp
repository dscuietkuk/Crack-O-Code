#include <iostream>
using namespace std;

int findDigits(int n)
{
    int temp = n;
    int counter = 0;
    while (temp != 0)
    {
        int currentDivisor = temp % 10;
        if (currentDivisor != 0 && n % currentDivisor == 0)
        {
            counter++;
        }
        temp = temp / 10;
    }
    return counter;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << findDigits(n) << endl;
    }
    return 0;
}