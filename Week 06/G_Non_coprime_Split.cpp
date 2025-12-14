#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"

int gcd(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int l, r;
        cin >> l >> r;

        if (r <= 3)
            cout << -1 << nl;
        else if (l < r)
        {
            if (r % 2)
                cout << (r - 1) / 2 << " " << (r - 1) / 2 << nl;
            else
                cout << r / 2 << " " << r / 2 << nl;
        }
        else
        {
            int n = gcd(l);
            if (n != l)
                cout << n << " " << l - n << nl;
            else
                cout << -1 << nl;
        }
    }

    return 0;
}