#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1, sum = 0;
    while (i <= n)
    {
        sum += i * i;
        i += 2;
    }
    cout << sum;
}