#include <iostream>
using namespace std;
int main()
{
    int t1 = 0, t2 = 1, next_term, n;
    cin >> n;

    cout << t1 << " " << t2 << " ";
    int i = 3;
    while (i <= n)
    {
        next_term = t1 + t2;
        t1 = t2;
        t2 = next_term;
        cout << next_term << " ";
        i++;
    }
}