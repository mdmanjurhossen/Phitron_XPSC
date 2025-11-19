#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> mp;
    ll ans = 0;
    int l = 0, r = 0;

    while (r < n)
    {
        mp[a[r]]++;
        if (mp.size() <= k)
            ans += r - l + 1;
        while (mp.size() > k)
        {
            mp[a[l]]--;
            if (mp[a[l]] == 0)
                mp.erase(a[l]);
            l++;
            if (mp.size() <= k)
                ans += r - l + 1;
        }
        r++;
    }

    cout << ans << "\n";

    return 0;
}