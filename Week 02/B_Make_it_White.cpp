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

        int l = 0, r = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                l = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                r = i;
                break;
            }
        }

        cout << r - l + 1 << endl;
    }

    return 0;
}