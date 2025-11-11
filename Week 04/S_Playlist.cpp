#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;
    set<int> st;
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        while (i < n && !st.count(a[i]))
        {
            st.insert(a[i]);
            ans = max(ans, i - j + 1);
            i++;
        }
        while (i < n && st.count(a[i]))
        {
            st.erase(a[j]);
            j++;
        }
    }

    cout << ans << "\n";

    return 0;
}