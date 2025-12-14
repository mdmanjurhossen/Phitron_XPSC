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
        int n, k;
        cin >> n >> k;

        int ans = n / k;

        for(int i = 0; i < k; i++)
        {
            cout << ans << " ";
            ans += n / k;
        }

        cout << nl;
    }

    return 0;
}