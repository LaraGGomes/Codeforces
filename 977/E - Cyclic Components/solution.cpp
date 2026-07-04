#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
const int maxn = 200100;
 
bool vis[maxn];
vector<vector<int>> adj;
int n, m, res = 0;
 
void bsf(int raiz) {
    queue<int> fila;
    fila.push(raiz);
    bool ciclico = true;
 
    while (!fila.empty()) {
        int i = fila.front(); fila.pop();
 
        vis[i] = true;
        if (adj[i].size() != 2) ciclico = false;
 
        for (auto v : adj[i]) {
            if (!vis[v]) fila.push(v);
        }
    }
 
    if (ciclico) res++;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    cin >> n >> m;
 
    adj.resize(n+1);
 
    while (m--) {
        int u, v;
        cin >> u >> v;
 
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            bsf(i);
        }
    }
 
    cout << res;
 
    return 0;
}