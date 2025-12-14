#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"

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
        ll sum = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % n)
        {
            cout << "Impossible" << nl;
            continue;
        }

        bool yes = true;

        for (int i = 0; i < n; i++)
        {
            if (sum / n == a[i])
            {
                cout << i + 1 << nl;
                yes = false;
                break;
            }
        }

        if (yes)
            cout << "Impossible" << nl;
    }

    return 0;
}