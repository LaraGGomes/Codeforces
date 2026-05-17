#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
 
    cin >> t;
 
    while (t--) {
        int n, confirm = 0;
        string s;
 
        cin >> n;
        cin >> s;
 
        for (int i = 0; i < n-1; i++) {
            if (s[i] == '1' && s[i+1] == '1') {
                confirm = 1;
            }
        }
 
        if (confirm || s[0] == '1' || s[n-1] == '1') {
            cout << "YES
";
        }
 
        else {
            cout << "NO
";
        }
    }
}