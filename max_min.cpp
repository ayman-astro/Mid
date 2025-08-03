#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    //  max number
    if (a > b && a > c)
    {
        cout << a << " is the max" << endl;
    }
    else if (b > a && b > c)
    {
        cout << b << " is the max" << endl;
    }
    else
    {
        cout << c << " is the max" << endl;
    }

    // min number
    if (a < b && a < c)
    {
        cout << a << " is the min" << endl;
    }
    else if (b < a && b < c)
    {
        cout << b << " is the min" << endl;
    }
    else
    {
        cout << c << " is the min " << endl;
    }
}