#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
  
    map<ll, int> caxas;
    int n, resto = 0, res;
 
    cin >> n;
 
    while (n) {
        ll a; cin >> a;
        caxas[a]++;
        n--;
    }
 
    for (auto [caxa, quant] : caxas) {
        auto it = caxas.upper_bound(caxa);
 
        if (it == caxas.end()) {
            res = resto + quant;
            break;
        }
        
        if (it->second >= quant) {
 
            if (resto <= (it->second - quant)) resto = 0;
            else resto = resto - (it->second - quant);
        }
 
        else resto += quant - it->second;
    }
 
    cout << res << "
";
  
    return 0;
}