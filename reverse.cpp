#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;

    int digit = 0;

    while (num != 0)
    {
        digit *= 10;
        digit += num % 10;
        num /= 10;
    }
    cout << digit;
}