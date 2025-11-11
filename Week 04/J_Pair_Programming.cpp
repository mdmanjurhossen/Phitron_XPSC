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
        int l, n, m;
        cin >> l >> n >> m;

        vector<int> a(n), b(m);
        int cnt = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < m; i++)
            cin >> b[i];

        vector<int> ans;
        bool yes = true;
        int i = 0, j = 0;
        while (i < n || j < m)
        {
            if (i < n && j < m)
            {
                if (a[i] == 0)
                    ans.push_back(0), i++, l++;
                else if (b[j] == 0)
                    ans.push_back(0), j++, l++;
                else
                {
                    if (a[i] < b[j] && a[i] <= l)
                        ans.push_back(a[i]), i++;
                    else if (a[i] >= b[j] && b[j] <= l)
                        ans.push_back(b[j]), j++;
                    else
                    {
                        yes = false;
                        break;
                    }
                }
            }
            else if (i < n)
            {
                if (a[i] == 0)
                    ans.push_back(0), i++, l++;
                else if (a[i] <= l)
                    ans.push_back(a[i]), i++;
                else
                {
                    yes = false;
                    break;
                }
            }
            else if (j < m)
            {
                if (b[j] == 0)
                    ans.push_back(0), j++, l++;
                else if (b[j] <= l)
                    ans.push_back(b[j]), j++;
                else
                {
                    yes = false;
                    break;
                }
            }
        }

        if (yes)
        {
            for (int i : ans)
                cout << i << " ";
            cout << "\n";
        }
        else
            cout << -1 << "\n";
    }
    return 0;
}