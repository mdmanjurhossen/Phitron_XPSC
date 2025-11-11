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

    long long sum1 = 0, sum3 = 0, ans = 0;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        if (sum1 < sum3)
        {
            sum1 += a[l];
            l++;
        }
        else
        {
            sum3 += a[r];
            r--;
        }
        if (sum1 == sum3)
            ans = max(sum1, ans);
    }

    cout << ans << "\n";

    return 0;
}