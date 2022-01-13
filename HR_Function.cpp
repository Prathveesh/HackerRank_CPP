#include <iostream>
using namespace std;
int big(int a, int b, int c, int d)
{
    int x;
    if (a > b && a > c && a > d)
    {
        x = a;
    }
    else if (b > c && b > d)
    {
        x = b;
    }
    else if (c > d)
    {
        x = c;
    }
    else
    {
        x = d;
    }
    return x;
}
int main()
{
    int a, b, c, d;
    int large;
    cin >> a >> b >> c >> d;
    large = big(a, b, c, d);
    cout << large;

    return 0;
}