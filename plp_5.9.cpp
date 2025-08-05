#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long int sum = 1;

    for (int i = 2; i <= n; i += 2)
    {
        sum += pow(i, i);
    }
    cout << sum;
}