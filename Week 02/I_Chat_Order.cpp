#include <bits/stdc++.h>
using namespace std;

class Com
{
public:
    bool operator()(string a, string b)
    {
        return true;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    reverse(v.begin(), v.end());
    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        if (mp[v[i]] == 0)
            cout << v[i] << "\n";
        mp[v[i]]++;
    }

    return 0;
}