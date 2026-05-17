#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    
    int n, flag;
    vector<pair<string,string>> flores;
    
    cin >> n;
    
    while(n) {
        string f1, f2;
        flag = 1;
        
        cin >> f1;
        cin >> f2;
        
        for(auto [flo, cor] : flores) {
            if (flo == f1 && cor == f2) flag = 0;
        }
        
        if (flag || flores.size() == 0) 
            flores.emplace_back(f1, f2);
        
        n--;
    }
 
    cout << flores.size();
 
    return 0;
}