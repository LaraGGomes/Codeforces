#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int w;
    cin >> w;
 
    if (w <= 2 || w % 2 != 0) cout << "NO" << endl;
    else cout << "YES" << endl;
 
    return 0;
}