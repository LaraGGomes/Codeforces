#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
 
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        if (n == 1) {
            cout << a[0] << "
";
            continue;
        }      
        
        if (a[0] == 0) {
            cout << "0
";
            continue;
        }
 
        long long sum;
        sum = min(a[0] + a[1], a[0]*2);
        
        cout << sum << "
";
    }
 
    return 0;
}