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
        string s1, s2;
        cin >> s1 >> s2;

        int a = 0, b = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2)
            {
                if (s1[i] == '1')
                    b--;
                if (s2[i] == '0')
                    a++;
            }
            else
            {
                if (s1[i] == '1')
                    a--;
                if (s2[i] == '0')
                    b++;
            }
        }

        if (a >= 0 && b >= 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}