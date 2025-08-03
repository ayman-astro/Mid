#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    do
    {
        cout << "Give your inputs and a can not be zero (a b c):";
        cin >> a >> b >> c;
    } while (a == 0);

    double d = (pow(b, 2) - 4 * a * c);
    if (d < 0)
    {
        cout << "complex number, NO real Solution" << endl;
    }
    else if (d == 0)
    {
        cout << (-b / (2 * a));
    }
    else
    {
        cout << "x1: " << (-b + sqrt(d)) / (2 * a) << endl;
        cout << "x2: " << (-b - sqrt(d)) / (2 * a) << endl;
    }
}