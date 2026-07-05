#include <bits/stdc++.h>
 
typedef long long ll;
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string a, b;
    cin >> a >> b;
 
    map<char,int> mapa;
    vector<bool> y(a.size());
    int yay = 0, whoop = 0;
 
    for (int i = 0; i < b.size(); i++) {
        mapa[b[i]]++;
    }
 
    for (int i = 0; i < a.size(); i++) {
        if (mapa[a[i]]) {
            yay++;
            mapa[a[i]]--;
            y[i] = true;
        }
    }
 
    for (int i = 0; i < a.size(); i++) {
        if (!y[i]) {
            if (a[i] >= 'a') {
                if (mapa[toupper(a[i])]) {
                    mapa[toupper(a[i])]--;
                    whoop++;
                }
            }
            else if (mapa[tolower(a[i])]) {
                mapa[tolower(a[i])]--;
                whoop++;
            }
        }
    }
 
    cout << yay << " " << whoop;
 
    return 0;
}