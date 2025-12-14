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
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        if (a[0] == a[1])
        {
            cout << "Yes" << nl;
            continue;
        }

        if (a[0] == 1)
        {
            ll g = 0;
            for (int i = 1; i < n; i++)
                g = __gcd(g, a[i]);

            if (g == 1)
                cout << "Yes" << nl;
            else
                cout << "No" << nl;
            continue;
        }

        vector<ll> v;
        for (int i = 1; i < n; i++)
        {
            if (a[i] % a[0] == 0)
                v.push_back(a[i]);
        }

        if (v.size() < 2)
        {
            cout << "No" << nl;
            continue;
        }

        sort(v.begin(), v.end());
        ll g = 0;

        for (ll i : v)
            g = __gcd(g, i);

        if (g == a[0])
            cout << "Yes" << nl;
        else
            cout << "No" << nl;
    }

    return 0;
}