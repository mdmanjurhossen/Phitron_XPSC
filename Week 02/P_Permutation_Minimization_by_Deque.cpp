#include <bits/stdc++.h>
using namespace std;
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
        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        deque<int> dq;
        dq.push_back(a[0]);
        for (int i = 1; i < n; i++)
        {
            if (a[i] <= dq.front())
                dq.push_front(a[i]);
            else
                dq.push_back(a[i]);
        }

        for (int it : dq)
            cout << it << " ";
        cout << "\n";
    }

    return 0;
}