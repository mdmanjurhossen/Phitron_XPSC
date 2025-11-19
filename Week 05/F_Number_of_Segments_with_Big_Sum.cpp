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

    ll sum = 0, ans = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        sum += a[r];
        while (sum > k && l <= r)
        {
            sum -= a[l];
            l++;
        }
        if (sum <= k)
            ans += r - l + 1;
        r++;
    }

    ll sub_arr = (n * (n + 1)) / 2;
    cout << sub_arr - ans << "\n";

    return 0;
}
