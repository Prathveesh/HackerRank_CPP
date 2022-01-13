#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a[1000], i, sum = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    for (i = 0; i < n; i++)
    {
        cout << sum;
    }
}
