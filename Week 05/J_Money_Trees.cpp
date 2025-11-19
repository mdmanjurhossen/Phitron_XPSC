#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), h(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> h[i];

        ll sum = 0, ans = 0, l = 0, r = 0;

        while (r < n)
        {
            sum += a[r];

            while (l <= r && sum > k)
            {
                sum -= a[l];
                l++;
            }

            if (r > 0)
            {
                if (l < r && (h[r - 1] % h[r]) != 0)
                {
                    l = r;
                    sum = a[r];
                }
            }

            ans = max(ans, r - l + 1);
            r++;
        }

        cout << ans << "\n";
    }

    return 0;
}