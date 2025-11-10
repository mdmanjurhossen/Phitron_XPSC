#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> mp;
    string subs1, subs2;
    for (int i = 1; i < n; i++)
    {
        subs1 = s[i - 1];
        subs2 = s[i];
        mp[subs1 + subs2]++;
    }

    int sz = -1;
    string gram;
    for (auto [k, v] : mp)
    {
        if (v > sz)
        {
            sz = v;
            gram = k;
        }
    }
    cout << gram << "\n";

    return 0;
}