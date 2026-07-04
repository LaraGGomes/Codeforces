#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m; cin >> n >> m;
    vector<pair<ll, int>> a(n);
    vector<ll> soma;
    ll last = 0;
    soma.push_back(0);
 
    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        a[i] = make_pair(x, 0);
    }
 
    while (m--) {
        int t; cin >> t;
        int x, y;
 
        if (t == 1) {
            cin >> x >> y;
            a[x-1] = make_pair(y, soma.size()-1);
        }
        else if (t == 2) {
            cin >> x;
            last += x;
            soma.push_back(last);
        }
        else if (t == 3) {
            cin >> x;
            ll val = a[x-1].first;
 
            cout << val + (last - soma[a[x-1].second]) << "
";
        }
    }
 
    return 0;
}