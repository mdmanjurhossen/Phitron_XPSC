#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    deque<int> b;

    if (n % 2)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                b.push_front(a[i]);
            else
                b.push_back(a[i]);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
                b.push_front(a[i]);
            else
                b.push_back(a[i]);
        }
    }

    for (int it : b)
        cout << it << " ";

    return 0;
}