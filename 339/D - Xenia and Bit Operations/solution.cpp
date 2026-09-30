#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
// SegTree
 
struct Node {
    ll val = 0;
    int flag = 0;
    Node() = default;
    Node(ll v, int f) : val(v), flag(f) {}
    Node operator+(const Node &rhs) const { return Node(rhs.flag ? (val^rhs.val) : (val | rhs.val), rhs.flag ^ 1); }
};
 
template <typename Node>
struct SegTree {
    int n;
    vector<Node> t;
    
    SegTree(int n) : n(n), t(4 * n) {}
    SegTree(const vector<ll> &a) : SegTree(a.size()) {
        build(1, 0, n - 1, a);
    }
 
    void build(int pos, int tl, int tr, const vector<ll> &a) {
        if(tl == tr) { t[pos] = Node(a[tl], 0); return; }
        int tm = (tl + tr) / 2;
        build(2 * pos, tl, tm, a);
        build(2 * pos + 1, tm + 1, tr, a);
        t[pos] = t[2 * pos] + t[2 * pos + 1];
    }
 
    void update(int i, ll new_val, int pos, int tl, int tr) {
        if(tl == tr) { t[pos] = Node(new_val, t[pos].flag); return; }
        int tm = (tl + tr) / 2;
        if(i <= tm) update(i, new_val, 2 * pos, tl, tm);
        else update(i, new_val, 2 * pos + 1, tm + 1, tr);
        t[pos] = t[2 * pos] + t[2 * pos + 1];
    }
    void update(int i, ll new_val) { update(i, new_val, 1, 0, n - 1); }
 
    Node query(int l, int r, int pos, int tl, int tr) {
        if(r < tl || tr < l) return Node();
        if(l <= tl && tr <= r) return t[pos];
        int tm = (tl + tr) / 2;
        return query(l, r, 2 * pos, tl, tm) + query(l, r, 2 * pos + 1, tm + 1, tr);
    }
    Node query(int l, int r) { return query(l, r, 1, 0, n - 1); }
};
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, q; cin >> n >> q;
    n = 1 << n;
    vector<ll> vec(n);
 
    for(int i = 0; i < n; i++) cin >> vec[i];
 
    SegTree<Node> seg(vec);
 
    while (q--) {
        int i, x; cin >> i >> x;
 
        seg.update(i-1, x);
 
        cout << seg.query(0, n-1).val << '
';
    }
 
    return 0;
}