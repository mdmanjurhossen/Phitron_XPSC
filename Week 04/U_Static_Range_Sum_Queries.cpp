#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<ll> ps(n + 1);
    for (int i = 1; i <= n; i++)
        ps[i] = ps[i - 1] + a[i];

    while (q--)
    {
        int l, r;
        cin >> l >> r;

        cout << ps[r] - ps[l - 1] << "\n";
    }

    return 0;
}