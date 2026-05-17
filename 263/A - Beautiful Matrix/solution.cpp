#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int matriz[5][5];
    int lin, col, moves;
 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matriz[i][j];
            if (matriz[i][j] == 1) {
                lin = i+1;
                col = j+1;
            }
        }
    }
 
    moves = abs(3 - lin) + abs(3 - col);
 
    cout << moves;
 
    return 0;
}