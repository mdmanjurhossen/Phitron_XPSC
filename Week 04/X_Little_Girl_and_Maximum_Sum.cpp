#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> v(n + 2);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        v[l] += 1;
        v[r + 1] += -1;
    }

    for (int i = 1; i < n + 2; i++)
        v[i] = v[i] + v[i - 1];

    sort(a.rbegin(), a.rend());
    sort(v.rbegin(), v.rend());

    ll ans = 0;
    for (int i = 0; i < n; i++)
        ans += (1ll * a[i] * v[i]);

    cout << ans << "\n";

    return 0;
}