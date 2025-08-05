#include <iostream>
using namespace std;

int main()
{
    int sum = 0;

    for (;;)
    {
        int num;
        cin >> num;
        if (num < 0)
        {
            break;
        }
        sum += num;
    }
    cout << sum;
}