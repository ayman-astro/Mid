#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int sum = 0;

    int n;
    cin >> n;

    while (i <= n)
    {
        sum += i;
        cout << i;
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