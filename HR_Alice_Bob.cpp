#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3], b[3], i, alice, bob;
    alice = 0;
    bob = 0;
    // for Alice
    for (i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    // for Bob
    for (i = 0; i < 3; i++)
    {
        cin >> b[i];
    }

    for (i = 0; i < 3; i++)
    {
        if (a[i] == b[i])
        {
            alice = alice;
            bob = bob;
        }
        else
        {
            if (a[i] > b[i])
            {
                alice++;
            }
            else
            {
                bob++;
            }
        }
    }

    cout << alice << " " << bob;
}
