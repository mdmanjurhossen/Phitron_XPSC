#include <bits/stdc++.h>
using namespace std;
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

        long long sum = 0;
        int cnt = 0;
        bool neg = false;
        for (int i = 0; i < n; i++)
        {
            sum += abs(a[i]);
            if (a[i] < 0)
            {
                if (!neg)
                {
                    neg = true;
                    cnt++;
                }
            }
            if (a[i] > 0)
                neg = false;
        }

        cout << sum << " " << cnt << "\n";
    }

    return 0;
}