#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll sum = 0;
    int ans = 0, l = 0, r = 0;
    while (r < n)
    {
        sum += a[r];
        if (sum <= x)
            ans = max(ans, r - l + 1);
        else
        {
            sum -= a[l];
            l++;
        }
        r++;
    }

    cout << ans << "\n";

    return 0;
}