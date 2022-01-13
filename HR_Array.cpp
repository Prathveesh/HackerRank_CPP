#include <iostream>
using namespace std;
int main()
{
    int n, a[1000], b[1000], i;

    cin >> n;
    for (i = 0; i <= n - 1; i++)
    {
        cin >> a[i];
    }

    for (i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}