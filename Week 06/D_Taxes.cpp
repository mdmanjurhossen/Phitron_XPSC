#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define d double
#define nl "\n"

bool isPrima(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
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

    int n;
    cin >> n;

    if (isPrima(n))
        cout << 1 << nl;
    else if (n % 2 == 0)
        cout << 2 << nl;
    else
    {
        if (isPrima(n - 2))
            cout << 2 << nl;
        else
            cout << 3 << nl;
    }

    return 0;
}