#include <iostream>
using namespace std;
int main()
{
    long long int fibo = 1;

    int n;
    cin >> n;

    while (n > 0)
    {
        fibo *= n;
        n--;
    }
    cout << fibo;
}