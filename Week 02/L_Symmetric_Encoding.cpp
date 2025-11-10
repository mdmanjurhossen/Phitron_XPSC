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
        set<char> st;
        for (int i = 0; i < n; i++)
            st.insert(s[i]);

        string r;
        for (auto it = st.begin(); it != st.end(); ++it)
            r.push_back(*it);

        map<char, char> mp;
        int i = 0, j = r.size() - 1;
        while (i < r.size())
        {
            mp[r[i]] = r[j];
            i++;
            j--;
        };

        for (int i = 0; i < n; i++)
            cout << mp[s[i]];

        cout << "\n";
    }

    return 0;
}