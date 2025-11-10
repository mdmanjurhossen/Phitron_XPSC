#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    string s2;
    for (char c : s)
    {
        if (c == '<')
            s2.pop_back();
        else
            s2.push_back(c);
    }
    cout << s2 << "\n";

    return 0;
}