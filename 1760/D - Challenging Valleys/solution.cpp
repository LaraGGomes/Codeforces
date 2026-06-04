#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
 
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
 
        for (int i = 0; i < n; i++) cin >> v[i];
 
        int l = -1, flag = 0;
 
        for(int i = 0; i < n; i++) {
            if (i == 0 || v[i-1] > v[i]) {
                l = i;
            }
            if (l != -1) {
                if (v[l] == v[i]) {
                    if (i == n - 1 || v[i] < v[i+1]) {
                        if (flag) {
                            flag = 0;
                            cout << "no
";
                            break;
                        }
                        else {
                            l = -1;
                            flag = 1;
                        }
                    }
                }
                else l = -1;
            }
        }
 
        if (flag) cout << "yes
";
    }
  
    return 0;
}