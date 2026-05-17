#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n, nd = 0;
        cin >> n;
        
        int a[n];
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        for (int i = 0; i < n-1; i++) {
            if (a[i] > a[i+1]) {
                nd = 1;
                break;
            }
        }
 
        if (nd) {
            cout << 1 << "
";
        }
        else {
            cout << n << "
";
        }
    }
 
    return 0;
}