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
        string s;
        cin >> s;
        int i;
        for (i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
                break;
        }
        if (s[i-1] != 'a')
            s.insert(s.begin() + i, 'a');
        else
            s.insert(s.begin() + i, 'b');
 
        cout << s << "\n";
    }
 
    return 0;
}