#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
    string s; cin >> s;
 
    int q; cin >> q;
 
    while (q--) {
        int m; cin >> m;
        char cor; cin >> cor;
 
        int i = 0, j = 0, melhor = 0, repaint = m;
        while (j < n) {
            if (s[j] != cor) repaint--;
 
            while (repaint < 0) {
                if (s[i] != cor) repaint++;
                i++;
            }
 
            melhor = max(j-i+1, melhor);
 
            j++;
        }
 
        cout << melhor << "
";
 
    }
  
    return 0;
}