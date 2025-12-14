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

        if (n <= 3)
            cout << 1 << nl;
        else if (n % 2)
            cout << (n - 1) / 2 << nl;
        else
            cout << n / 2 << nl;
    }

    return 0;
}