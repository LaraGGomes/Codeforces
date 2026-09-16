#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
// Sparse Table
//
 
template <typename T>
struct SparseTable {
    vector<vector<T>> st;
    int n, k; // k = 24 is enough for n <= 10^7
 
    T op(T a, T b) { 
        return  a & b; 
    }
 
    SparseTable(const vector<T> &vec) {
        n = vec.size();
        k = __lg(n) + 1;
        st.assign(k + 1, vector<T>(n));
        for (int j = 0; j < n; j++) st[0][j] = vec[j];
        for (int i = 1; i <= k; i++) 
            for (int j = 0; j + (1 << i) <= n; j++) 
                st[i][j] = op(st[i - 1][j], st[i - 1][j + (1 << (i - 1))]);
    }
 
    T IdQuery(int l, int r) {
        int i = __lg(r - l + 1);
        return op(st[i][l], st[i][r - (1 << i) + 1]);
    }
 
    T newQuery(int l, int x) {
        int j = l - 1;
        
        if (st[0][j] < x) return -1;
        
        int idx = j;
        int curr = ~0; // máscara de bits 1
        
        for (int i = k; i >= 0; i--) {
            if (idx + (1 << i) <= n) {
                int prox = op(curr, st[i][idx]);
 
                if (prox >= x) {
                    curr = prox;
                    idx += (1<<i);
                }
            }
        }
 
        return idx;
    }
};
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
 
    while (t--) {
        int n; cin >> n;
        vector<int> v(n);
    
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
    
        SparseTable st(v);
 
        int q; cin >> q;
        while (q--) {
            int l, k; cin >> l >> k;
 
            cout << st.newQuery(l, k) << ' ';
        }
 
        cout << '
';
    
    }
 
    return 0;
}