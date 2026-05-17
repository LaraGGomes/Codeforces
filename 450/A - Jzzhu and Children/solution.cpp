#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
 
    int n, m;
    queue<pair<int,int>> pirrai;
 
    cin >> n >> m;
 
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
 
        if (x > m) {
            pirrai.push(make_pair(x-m, i));
        }
    }
 
    if (pirrai.empty()) cout << n;
 
    else {
 
        while (pirrai.size() > 1) {
            if (pirrai.front().first > m) {
                int x = pirrai.front().first;
                int i = pirrai.front().second;
                pirrai.push(make_pair(x-m, i));
            }
            pirrai.pop();
        }
 
        cout << pirrai.front().second;
    }
 
    return 0;
}