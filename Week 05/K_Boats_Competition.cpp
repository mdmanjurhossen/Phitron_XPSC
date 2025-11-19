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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        int ans = 0;
        for (int k = 0; k < 101; k++)
        {
            int l = 0, r = n - 1, cnt = 0;
            while (l < r)
            {
                if (a[l] + a[r] == k)
                {
                    cnt++;
                    l++, r--;
                }
                else if (a[l] + a[r] < k)
                    l++;
                else
                    r--;
            }
            ans = max(ans, cnt);
        }
        cout << ans << "\n";
    }

    return 0;
}