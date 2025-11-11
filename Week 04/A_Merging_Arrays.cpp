#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    queue<int> a;
    queue<int> b;

    // vector<int> a(n);
    // vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push(x);
    }

    while (!a.empty()  && !b.empty())
    {
        if (a.front() <= b.front())
        {
            cout << a.front() << " ";
            a.pop();
        }
        else
        {
            cout << b.front() << " ";
            b.pop();
        }
    }

    while (!a.empty())
    {
        cout << a.front() << " ";
        a.pop();
    }

   while (!b.empty())
    {
        cout << b.front() << ' ';
        b.pop();
    }

    return 0;
}