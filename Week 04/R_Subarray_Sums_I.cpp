#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<ll> ps(n);
    ps[0] = a[0];
    for (int i = 1; i < n; i++)
        ps[i] = ps[i - 1] + a[i];

    int ans = 0;
    unordered_map<ll, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (ps[i] == x)
            ans++;

        ll val = ps[i] - x;
        if (mp.find(val) != mp.end())
            ans += mp[val];

        if (mp.find(ps[i]) == mp.end())
            mp[ps[i]] = 0;
        mp[ps[i]]++;
    }

    cout << ans << "\n";

    return 0;
}