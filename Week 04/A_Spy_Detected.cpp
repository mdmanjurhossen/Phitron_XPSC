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

        int ans = 0;
        int x;

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
            if (mp[a[i]] > 1)
            {
                x = a[i];
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (x != a[i])
            {
                ans = i + 1;
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}