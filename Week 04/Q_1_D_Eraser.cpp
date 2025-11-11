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

        int ans = 0;

        int i = 0;
        while (i < n)
        {
            if (s[i] == 'B')
            {
                ans++;
                i += k;
            }
            else
                i++;
        }

        cout << ans << "\n";
    }

    return 0;
}