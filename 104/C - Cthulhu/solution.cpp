#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m;
 
    cin >> n >> m;
    
    vector<bool> vis(n+1);
    vector<int> pai(n+1);
    
    vector<vector<int>> grafo(n+1);
    
    int t = 0;
    while (t < m) {
        int a, b;
        cin >> a >> b;
        
        grafo[a].push_back(b);
        grafo[b].push_back(a);
        t++;
    }
    
    if (n != m) {
        cout << "NO
";
        return 0;
    }
 
    stack<int> pilha;
    bool flag = false;
 
    pai[1] = 1;
 
    pilha.push(1);
 
    while(!pilha.empty()) {
        int v = pilha.top(); pilha.pop();
        vis[v] = true;
 
        for (int adj : grafo[v]) {
 
            if(!vis[adj]) {
                pai[adj] = v;
 
                pilha.push(adj);
            } else {
                if (!flag && pai[v]!= adj) {
                    flag = true;
                }
            }
        }
    }
 
    if (flag) {
        for (int i = 1; i <= n; i++) {
            if (!vis[i]) {
                cout << "NO
";
                return 0;
            }
        }
 
        cout << "FHTAGN!
";
        return 0;
    }
 
    cout << "NO
";
 
    return 0;
}