#include <bits/stdc++.h>
using namespace std;

int longestKSubstr(string &s, int k)
{
    map<char, int> cnt;
    int ans = 0;
    int l = 0, r = 0;

    while (r < s.size())
    {
        cnt[s[r]]++;
        if (cnt.size() == k)
            ans = max(ans, r - l + 1);
        else
        {
            while (cnt.size() > k)
            {
                cnt[s[l]]--;
                if (cnt[s[l]] == 0)
                    cnt.erase(s[l]);
                l++;
            }
        }
        r++;
    }
    if (ans == 0)
        return -1;
    else
        return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}