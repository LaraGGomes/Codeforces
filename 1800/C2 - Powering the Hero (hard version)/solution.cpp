#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    int t, n;
    
    cin >> t;
    while (t) {
        cin >> n;
        priority_queue<ll> bonus;
        ll total = 0;
 
        while (n) {
            ll x; cin >> x;
 
            if (x) bonus.push(x);
            else {
                if (!bonus.empty()) {
                    total += bonus.top();
                    bonus.pop();
                }
            }
 
            n--;
        }
        cout << total << "
";
 
        t--;
    }
 
  
    return 0;
}