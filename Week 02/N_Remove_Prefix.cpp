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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        reverse(a.begin(), a.end());

        int remove = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (mp[a[i]] == 1)
            {
                remove = n - i;
                break;
            }
            mp[a[i]]++;
        }
        cout << remove << "\n";
    }

    return 0;
}