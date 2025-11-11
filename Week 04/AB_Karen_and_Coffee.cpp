#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1(200005);
    vector<int> arr2(200005);

    int n, k, q;
    cin >> n >> k >> q;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        arr1[a]++;
        arr1[b + 1]--;
    }
    for (int i = 1; i < 200005; i++)
    {
        arr1[i] += arr1[i - 1];

        arr2[i] += arr2[i - 1] + (arr1[i] >= k);
    }
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << arr2[b] - arr2[a - 1] << "\n";
    }
    return 0;
}