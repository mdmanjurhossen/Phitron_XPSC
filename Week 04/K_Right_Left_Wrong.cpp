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
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        string s;
        cin >> s;

        vector<long long> ps(n + 1);
        ps[1] = a[1];
        for (int i = 2; i <= n; i++)
            ps[i] = ps[i - 1] + a[i];

        long long ans = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] == 'L' && s[r] == 'R')
            {
                ans += ps[r + 1] - ps[l];
                l++, r--;
            }
            if (s[l] != 'L')
                l++;
            if (s[r] != 'R')
                r--;
        }

        cout << ans << "\n";
    }

    return 0;
}