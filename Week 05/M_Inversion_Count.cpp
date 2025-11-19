#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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

        pbds<int> ps;
        int l = 0, r = 0;
        long long ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            ans += ps.order_of_key(a[i]);
            ps.insert(a[i]);
        }

        cout << ans << "\n";
    }

    return 0;
}