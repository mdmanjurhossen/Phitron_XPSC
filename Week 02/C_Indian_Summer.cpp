#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();

    set<string> st;
    while (n--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        st.insert(s1 + " " + s2);
    }

    cout << st.size() << endl;

    return 0;
}