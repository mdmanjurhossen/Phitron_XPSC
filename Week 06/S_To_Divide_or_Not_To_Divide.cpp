#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll a, b, n;
        cin >> a >> b >> n;

        if (a % b == 0)
        {
            cout << -1 << nl;
            continue;
        }

        ll ans = n;
        if (n % a)
            ans = n + a - (n % a);

        while (!(ans % a == 0 && ans % b != 0))
            ans += a;

        cout << ans << nl;
    }

    return 0;
}