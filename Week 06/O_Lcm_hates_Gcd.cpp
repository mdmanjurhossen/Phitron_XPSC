#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"

ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll a, b;
        cin >> a >> b;

        ll x = __gcd(a, b);

        ll ans = lcm(a, x) - __gcd(b, x);

        cout << ans << nl;
    }

    return 0;
}