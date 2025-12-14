#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define d double
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll red = n / a;
    ll blue = n / b;

    ll lcm = (a / __gcd(a, b)) * b;

    ll overlap = n / lcm;

    ll ans = 0;
    ans += red * p + blue * q;

    ans -= overlap * min(p, q);

    cout << ans << nl;

    return 0;
}