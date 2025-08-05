#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    do
    {
        cin >> n;
    } while (n < 0);

    long long int fact = 1;

    while (n >= 1)
    {
        fact *= n;
        n--;
    }

    cout << fact;
}