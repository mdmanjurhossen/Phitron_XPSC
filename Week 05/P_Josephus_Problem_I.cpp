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

    int n;
    cin >> n;

    pbds<int> ps;
    for (int i = 1; i <= n; i++)
        ps.insert(i);

    int idx = 1 % n;
    while (n--)
    {
        auto it = ps.find_by_order(idx);
        cout << *it << " ";
        ps.erase(it);

        if (n)
            idx = (idx + 1) % n;
    }

    return 0;
}