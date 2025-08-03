#include <iostream>
using namespace std;
int main()
{
    double i = 1;
    double sum = 0;

    int n;
    cin >> n;

    cout << i << " + ";
    i++;
    while (i <= n)
    {
        sum += 1 / i;
        cout << 1 << '/' << i;
        if (i == n)
        {
            cout << " = ";
        }
        else
        {
            cout << " + ";
        }
        i++;
    }
    cout << sum;
}