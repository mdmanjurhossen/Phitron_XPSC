#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> gcd[10001];

    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (__gcd(i, j) == 1)
                gcd[i].push_back(j);
        }
    }

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        vector<int> mxidx(1001, -1);
        for (int i = 1; i <= n; i++)
            mxidx[a[i]] = i;

        int ans = 0;

        for (int i = 1; i <= 1000; i++)
        {
            if (mxidx[i] == -1)
                continue;

            if (i == 1)
            {
                ans = max(ans, 2 * mxidx[i]);
                continue;
            }

            for (auto p : gcd[i])
            {
                if (mxidx[p] != -1)
                    ans = max(ans, mxidx[i] + mxidx[p]);
            }
        }

        if (ans)
            cout << ans << nl;
        else
            cout << -1 << nl;
    }

    return 0;
}