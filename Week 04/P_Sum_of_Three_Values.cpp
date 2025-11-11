#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        a.push_back({v, i + 1});
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        int rs = x - a[i].first;
        int l = i + 1, r = n - 1;
        while (l < r)
        {
            int temp = a[l].first + a[r].first;
            if (temp == rs)
            {
                cout << a[i].second << " " << a[l].second << " " << a[r].second << "\n";
                return 0;
            }
            else if (temp < rs)
                l++;
            else
                r--;
        }
    }
    cout << "IMPOSSIBLE" << "\n";

    return 0;
}