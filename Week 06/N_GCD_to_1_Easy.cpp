#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"

bool isPrime(int n)
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

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == j)
                    v[i][j] = 3;
                else
                    v[i][j] = 2;
            }
        }

        if (n < m)
        {
            for (int j = n; j < m; j++)
                v[0][j] = 3;
        }

        if (m < n)
        {
            for (int i = m; i < n; i++)
                v[i][0] = 3;
        }

        for (auto i : v)
        {
            for (auto j : i)
                cout << j << " ";
            cout << nl;
        }
    }

    return 0;
}