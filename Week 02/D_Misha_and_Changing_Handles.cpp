#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    cin.ignore();

    map<string, string> mp;

    while (q--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        bool flag = false;
        for (auto it : mp)
        {
            if (it.second == s1)
            {
                mp[it.first] = s2;
                flag = true;
            }
        }
        if (!flag)
            mp[s1] = s2;
    }

    cout << mp.size() << "\n";
    for (auto it : mp)
        cout << it.first << " " << it.second << '\n';

    return 0;
}