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

        int one = 0;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one++;
            else
                zero++;
        }

        if (one % 2 == 1 || zero % 2 == 1 || s[0] == '0' || s.back() == '0')
        {
            cout << "NO" << "\n";
            continue;
        }

        string a = "";
        string b = "";
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                if (one)
                {
                    a += (char)('(');
                    b += (char)('(');
                    one -= 2;
                }
                else
                {
                    a += (char)(')');
                    b += (char)(')');
                }
            }
            else
            {
                if (zero % 2 == 0)
                {
                    a += (char)('(');
                    b += (char)(')');
                    zero--;
                }
                else
                {
                    a += (char)(')');
                    b += (char)('(');
                    zero--;
                }
            }
        }

        cout << "YES" << "\n";
        cout << a << "\n";
        cout << b << "\n";
    }

    return 0;
}