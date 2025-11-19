#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long

template<typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<pair<ll, ll>> v(n);
        for (int i = 0; i < n; i++){
            ll ai, bi;
            cin >> ai >> bi;
            v[i] = {bi, ai};
        }

        sort(v.begin(), v.end());

        pbds<ll> os;
        ll ans = 0;

        for (auto &p : v) {
            ll bi = p.first;
            ll ai = p.second;

            ll gc = os.size() - os.order_of_key(ai + 1);
            ans += gc;

            os.insert(ai);
        }

        cout << ans << "\n";
    }

    return 0;
}
