#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t, n;
 
    cin >> t;
    while (t) {
        cin >> n;
 
        int a, v = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a == 67) {
                v = 1;
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