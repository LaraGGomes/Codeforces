#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
        int maior = 0, a[n], count = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] > maior) {
                maior = a[i];
            }
        }
 
        for (int i = 0; i < n; i++) {
            if (a[i] == maior) {
                count++;
            }
        }
 
        cout << count << "
";
    }
 
    return 0;
}