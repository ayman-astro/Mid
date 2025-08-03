#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    //  max number
    int max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    cout << max << " is the maximum" << endl;

    //  min number
    int min = a < b ? (a < c ? a : c) : (b < c ? b : c);
    cout << min << " is the minimum" << endl;
}