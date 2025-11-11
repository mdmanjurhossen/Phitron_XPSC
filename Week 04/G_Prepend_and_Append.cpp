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

        int i = 0, j = n - 1;
        while (i < j)
        {
            if (s[i] == s[j])
                break;
            i++;
            j--;
        }

        cout << j - i + 1 << "\n";
    }

    return 0;
}