#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll k;

    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    multiset<int> st;
    int l = 0, r = 0;
    ll ans = 0;
    while (r < n)
    {
        st.insert(a[r]);

        while (!st.empty() && *st.rbegin() - *st.begin() > k)
        {
            st.erase(st.find(a[l]));
            l++;
        }

        ans += r - l + 1;
        r++;
    }

    cout << ans << "\n";

    return 0;
}