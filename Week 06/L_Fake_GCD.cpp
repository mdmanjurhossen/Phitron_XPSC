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
        for (int i = 1; i <= n; i++)
            cout << i << " ";
        cout << nl;
    }

    return 0;
}