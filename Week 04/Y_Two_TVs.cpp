#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<int, int> a;

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }

    bool ans = true;
    long long sum = 0;
    for (auto [k, v] : a)
    {
        sum += v;
        if (sum > 2)
        {
            ans = false;
            break;
        }
    }

    if (ans)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}