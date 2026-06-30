#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n; cin >> n;
 
    if (n%5 == 0) cout << n/5;
    else cout << n/5+1;
 
    return 0;
}