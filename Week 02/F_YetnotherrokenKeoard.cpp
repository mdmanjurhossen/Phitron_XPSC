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
        stack<int> capital, small;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'B')
                capital.push(i);
            if (s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b')
                small.push(i);

            if (!capital.empty() && s[i] == 'B')
            {
                s[capital.top()] = '$';
                capital.pop();
            }
            if (!small.empty() && s[i] == 'b')
            {
                s[small.top()] = '$';
                small.pop();
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'B' && s[i] != 'b' && s[i] != '$')
                cout << s[i];
        }
        cout << "\n";
    }

    return 0;
}