#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int sum = 0;

    for (int i = 1, j = 1; j <= n; i++, j += 2)
    {
        if (i % 2 == 0)
        {
            sum -= j * j;
        }
        else
        {
            sum += j * j;
        }
    }
    cout << sum;
}