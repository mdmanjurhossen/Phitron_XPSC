#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> a(n + 2);

    while (m--)
    {
        int l, r;
        cin >> l >> r;

        a[l]++;
        a[r + 1]--;
    }

    for (int i = 1; i <= n; i++)
        a[i] = a[i - 1] + a[i];

    int ans = INT_MAX;
    for (int i = 1; i <= n; i++)
        ans = min(a[i], ans);

    cout << ans << "\n";

    return 0;
}