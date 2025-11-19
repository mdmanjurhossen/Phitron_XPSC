#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    ll x, y;
    cin >> n >> x >> y;
    vector<ll> a(n);
    ll s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    sort(a.begin(), a.end());

    ll l = s - y;
    ll r = s - x;
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        ll lo = l - a[i];
        ll hi = r - a[i];
        
        auto lo_it = lower_bound(a.begin() + i + 1, a.end(), lo);
        auto hi_it = upper_bound(a.begin() + i + 1, a.end(), hi);

        ans += hi_it - lo_it;
    }

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
