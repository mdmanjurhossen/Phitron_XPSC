#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 0, l = 0, r = 0, sum = 0;
        while (r < n)
        {
            sum += a[r];
            if (sum == s)
                ans = max(ans, r - l + 1);
            else
            {
                while (sum > s)
                {
                    sum -= a[l];
                    l++;
                }
            }
            r++;
        }
        if (ans)
            cout << n - ans << "\n";
        else
            cout << -1 << "\n";
    }

    return 0;
}