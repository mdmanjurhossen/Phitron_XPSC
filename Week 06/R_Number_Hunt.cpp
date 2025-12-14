#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"

bool isPrime(ll n)
{
    if (n == 1)
        return false;
    for (ll i = 2; i *i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int x;
        cin >> x;

        int cnt = 0;
        ll y = 1;
        ll i = x;
        while (cnt < 2)
        {
            if (isPrime(i))
            {
                y *= i;
                cnt++;
            }
            i++;
        }

        cout << y << nl;
    }

    return 0;
}