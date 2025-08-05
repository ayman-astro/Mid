#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int t1 = 0, t2 = 1, next;
    cout << t1 << " " << t2 << " ";

    next = t1 + t2;
    t1 = t2;
    t2 = next;

    cout << next << " ";

    int i = 3;
    do
    {
        next = t1 + t2;
        t1 = t2;
        t2 = next;
        cout << next << " ";
        i++;
    } while (i < n);
}