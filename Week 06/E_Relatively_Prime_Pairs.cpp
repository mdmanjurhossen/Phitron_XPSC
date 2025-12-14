#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll l, r;
    cin >> l >> r;

    if ((r - l + 1) % 2)
        cout << "NO" << nl;
    else
    {
        cout << "YES" << nl;
        for (ll i = l; i <= r; i += 2)
            cout << i << " " << i + 1 << nl;
    }

    return 0;
}