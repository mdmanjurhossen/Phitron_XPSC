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
        int n, x;
        cin >> n >> x;
        int sum = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum == x)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum == x)
                swap(a[i], a[i + 1]);
        }

        for (int i : a)
            cout << i << " ";
        cout << "\n";
    }

    return 0;
}