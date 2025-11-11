#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back({x, i + 1});
    }

    sort(a.begin(), a.end());
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        ll sum = a[i].first + a[j].first;
        if (sum == x)
        {
            cout << a[i].second << " " << a[j].second << "\n";
            return 0;
        }
        else if (x > sum)
            i++;
        else
            j--;
    }

    cout << "IMPOSSIBLE\n";

    return 0;
}