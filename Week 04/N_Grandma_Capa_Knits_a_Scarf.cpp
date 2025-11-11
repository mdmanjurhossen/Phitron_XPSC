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
        string s;
        cin >> s;

        int ans = INT_MAX;
        for (int i = 0; i < 26; i++)
        {
            bool yes = true;
            int cnt = 0;
            int l = 0, r = n - 1;
            while (l < r)
            {
                if (s[l] != s[r])
                {
                    if (s[l] == char(i + 'a'))
                        l++, cnt++;
                    else if (s[r] == char(i + 'a'))
                        r--, cnt++;
                    else
                    {
                        yes = false;
                        break;
                    }
                }
                else
                    l++, r--;
            }
            if (yes)
                ans = min(ans, cnt);
        }

        if (ans == INT_MAX)
            cout << -1 << "\n";
        else
            cout << ans << "\n";
    }

    return 0;
}