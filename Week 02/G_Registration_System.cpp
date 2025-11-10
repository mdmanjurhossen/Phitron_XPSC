#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> a;
    map<string, int> mp;
    while (n--)
    {
        string s;
        cin >> s;
        if (a.empty())
        {
            cout << "OK\n";
            a.push_back(s);
            mp[s]++;
        }
        else
        {
            mp[s]++;
            if (mp[s] > 1)
                 cout << s << mp[s] -1 << '\n';
            else
                cout << "OK\n";
            a.push_back(s);
        }
    }

    return 0;
}