#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int sum = 0, i = 2;
    do
    {
        sum += i;
        i += 2;
    } while (i <= num);
    cout << sum;
}