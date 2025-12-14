
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
        int l, r;
        cin >> l >> r;

        if (l * 2 <= r)
            cout << l << " " << l * 2 << nl;
        else
            cout << -1 << " " << -1 << nl;
    }

    return 0;
}