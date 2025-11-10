#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sereja = 0, dina = 0;

    int i = 0, j = n - 1;
    bool flag = true;
    while (i <= j)
    {
        if (a[i] > a[j])
        {
            if (flag)
                sereja += a[i];
            else
                dina += a[i];
            i++;
        }
        else
        {
            if (flag)
                sereja += a[j];
            else
                dina += a[j];
            j--;
        }
        flag = !flag;
    }

    cout << sereja << " " << dina << endl;

    return 0;
}