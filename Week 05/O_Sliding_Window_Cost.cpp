#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k, i, j;
    cin >> n >> k;
    vector<ll> a(n + 1);
    pbds<pair<ll, ll>> ps;
    for (i = 1; i <= k; i++)
    {
        cin >> a[i];
        ps.insert({a[i], i});
    }

    int x = ps.find_by_order((k - 1) / 2)->first;
    ll ans = 0;
    for (int i = 1; i <= k; i++)
        ans += abs(a[i] - x);

    cout << ans << " ";

    if (k % 2)
    {
        for (i = k + 1, j = 1; i <= n; i++, j++)
        {
            cin >> a[i];
            ps.insert({a[i], i});
            ps.erase({a[j], j});
            int mid = ps.find_by_order((k - 1) / 2)->first;
            ans += abs(x - mid);
            ans += abs(a[i] - mid);
            ans -= abs(a[j] - mid);
            cout << ans << " ";
            x = mid;
        }
    }
    else
    {
        for (i = k + 1, j = 1; i <= n; i++, j++)
        {
            cin >> a[i];
            ps.insert({a[i], i});
            ps.erase({a[j], j});
            int mid = ps.find_by_order((k - 1) / 2)->first;
            if (mid < x)
                ans += 2 * abs(x - mid);
            ans += abs(a[i] - mid);
            ans -= abs(a[j] - mid);
            cout << ans << " ";
            x = mid;
        }
    }

    return 0;
}