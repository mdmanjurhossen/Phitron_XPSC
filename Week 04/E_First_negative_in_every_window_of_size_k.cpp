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
        deque<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2)
                a.push_front(x);
            else
                a.push_back(x);
        }

        for (int i : a)
            cout << i << " ";
        cout << "\n";
    }

    return 0;
}