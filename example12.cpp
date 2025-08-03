#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    long long int sum = 1;

    int sign = 1;

    cout << 1 << " - ";
    for (int i = 2; i <= n; i++)
    {
        sign *= -1;
        cout << i << "^3";
        if (i != n)
        {
            if (i % 2)
            {
                cout << " - ";
            }
            else
            {
                cout << " + ";
            }
        }
        else
        {
            cout << " = ";
        }
        sum += sign * i * i * i;
    }
    cout << sum;
}