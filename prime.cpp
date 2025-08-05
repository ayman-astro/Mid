#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    cin >> num;

    if (num < 2)
    {
        cout << "Not Prime" << endl;
        return 0;
    }

    bool flag = true;

    int i = 2;
    while (i <= sqrt(num))
    {
        if (num % i == 0)
        {
            flag = false;
            break;
        }
        i++;
    }
    flag ? cout << "Prime" << endl : cout << "Not Prime" << endl;
    return 0;
}