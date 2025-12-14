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
        int n, x, y;
        cin >> n >> x >> y;

        ll ans = (n * 2 - 2) + min(x - 1, y - 1) + min(x - 1, n - y) + min(n - x, n - y) + min(n - x, y - 1);

        cout << ans << nl;
    }

    return 0;
}