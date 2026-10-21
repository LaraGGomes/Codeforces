#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
    int res = 2;
 
    if(n <= 2) res = 1; // exceção
 
    n+=2;
 
    vector<int> crivo(n+1, 1);
 
    for(int i = 4; i < n; i+=2) crivo[i] = 2;
 
    for(int i = 3; i * i < n; i+=2) {
        if(crivo[i] == 1) {
            for(int j = (ll)i*i; j <= n; j+= 2*i) crivo[j] = 2;
        }
    }
 
    cout << res << endl;
 
    for(int i = 2; i < n; i++) {
        cout << crivo[i] << ' ';
    }
 
    cout << endl;
 
    return 0;
}