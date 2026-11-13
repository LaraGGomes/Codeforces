/*
Data of Creation: 12-11-2026
Creator: Lara Gomes Gonçalves
*/
#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const int INF = 1000000007;
 
const ll LINF = 1000000000000000000;
 
 
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--) {
        vector<int> vec(3);
 
        for(int i = 0; i < 3; i++) {
            cin >> vec[i];
        }
 
        sort(vec.begin(), vec.end());
 
        if (abs(vec[0] - vec[1]) == 1 && abs(vec[1] - vec[2]) == 1) {
            cout << "YES
";
        }
        else {
            cout << "NO
";
        }
    }
}