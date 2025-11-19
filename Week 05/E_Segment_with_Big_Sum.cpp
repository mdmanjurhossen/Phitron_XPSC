#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll k;

    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = INT_MAX, l = 0, r = 0;
    ll sum = 0;
    while (r < n)
    {
        sum += a[r];

        while (sum >= k)
        {
            ans = min(ans, r - l + 1);
            sum -= a[l];
            l++;
        }

        r++;
    }

    if (ans == INT_MAX)
        cout << -1 << "\n";
    else
        cout << ans << "\n";
    return 0;
}