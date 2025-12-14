#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);

    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    ll sum = 0;
    ll g = 0;

    for (int i = 0; i < n; i++)
    {
        ll x = mx - a[i];
        sum += x;
        g = __gcd(g, x);
    }

    cout << sum / g << " " << g << nl;

    return 0;
}