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
        string s;
        cin >> s;
        vector<long long> op;

        long long total = 0;

        for (int i = 0; i < n; i++)
        {
            long long L = i;
            long long R = n - i - 1;
            if (s[i] == 'L')
            {
                if (R > L)
                {
                    total += R;
                    op.push_back(R - L);
                }
                else
                    total += L;
            }
            else
            {
                if (L > R)
                {
                    op.push_back(L - R);
                    total += L;
                }
                else
                    total += R;
            }
        }

        vector<long long> ans(n, total);

        sort(op.begin(), op.end(), greater<long long>());

        for (int i = op.size() - 1; i > 0; i--)
        {
            total -= op.back();
            op.pop_back();
            ans[i - 1] = total;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}