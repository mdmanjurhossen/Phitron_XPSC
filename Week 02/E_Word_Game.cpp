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
        cin.ignore();

        map<string, int> mp;

        vector<string> p1(n), p2(n), p3(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p1[i];
            mp[p1[i]]++;
        }
        cin.ignore();

        for (int i = 0; i < n; i++)
        {
            cin >> p2[i];
            mp[p2[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> p3[i];
            mp[p3[i]]++;
        }

        int a = 0, b = 0, c = 0;

        for (auto i : p1)
        {
            if (mp[i] == 1)
                a += 3;
            else if (mp[i] == 2)
                a += 1;
        }

        for (auto i : p2)
        {
            if (mp[i] == 1)
                b += 3;
            else if (mp[i] == 2)
                b += 1;
        }

        for (auto i : p3)
        {
            if (mp[i] == 1)
                c += 3;
            else if (mp[i] == 2)
                c += 1;
        }

        cout << a << " " << b << " " << c << '\n';
    }

    return 0;
}