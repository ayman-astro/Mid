#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, n;
    cin >> x >> n;

    long long int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        cout << x << '^' << i;
        if (i != n)
        {
            cout << " + ";
        }
        else
        {
            cout << " = ";
        }
        sum += pow(x, i);
    }
    cout << sum;
}