#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t, n;
 
    cin >> t;
    while (t) {
        cin >> n;
 
        int a[n];
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        int index, dob, v = 1 , i;
 
        for (i = 0; i+1 <= n / 2; i++) {
            index = i + 1;
            
            if (a[i] != index) {
 
                for (dob = index*2; dob/2 <= n; dob*=2) {
                    if (a[(dob)-1] == index) {
                        swap(a[i], a[(dob)-1]);
                        break;
                    }
                }
 
                if (a[i] != index) {
                    v = 0;
                    break;
                }
            }
        }
 
        for (i; i < n; i++) {
            index = i + 1;
 
            if (a[i] != index) {
                v = 0;
                break;
            }
        }
 
        if (v) {
            cout << "YES
";
        }
 
        else {
            cout << "NO
";
        }
 
        t--;
    }
 
    return 0;
}