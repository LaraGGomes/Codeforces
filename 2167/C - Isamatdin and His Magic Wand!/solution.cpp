#include <bits/stdc++.h>    
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t, n, aux, ord;
    
    cin >> t;
 
    for (int i = 0; i < t; i++) {
        ord = 0;
        cin >> n;
        int a[n];
        
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            if (a[0] % 2 != a[j] % 2) {
                ord = 1;
            }
        }
 
        if (ord) {
            sort(a,a+n);
        }
 
        for (int j = 0; j < n; j++) {
            cout << a[j] << " ";
        }
        cout << "
";
    }
 
 
    return 0;
} 