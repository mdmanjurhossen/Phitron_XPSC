#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int longestSubarray(vector<int> &arr, int k)
{
    int n = arr.size();

    int sum = 0, ans = 0;
    unordered_map<int, int> mp;
    mp[0] = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (mp.find(sum - k) != mp.end())
            ans = max(ans, i - mp[sum - k]);

        if (mp.find(sum) == mp.end())
            mp[sum] = i;
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int ans = longestSubarray(a, k);

    cout << ans << "\n";
    return 0;
}