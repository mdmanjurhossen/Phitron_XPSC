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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int b = 0, w = 0, l = 0;
        int ans = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'W')
                w++;
            else
                b++;
            l++;

            if (l >= k)
            {
                if (s[i - k] == 'W')
                    w--;
                else
                    b--;
                ans = min(ans, w);
                l--;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}