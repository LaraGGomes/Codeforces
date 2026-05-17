#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t, n, prox, x, count;
 
    cin >> t;
    while (t) {
        cin >> n;
 
        int a[n];
        count = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        for (int i = 0; i < n-1; i++) {
            prox = i + 1;
 
            if (a[i] + a[prox] == 7 || a[i] == a[prox]) {
                if (a[prox] + a[prox+1] == 7 || a[prox] == a[prox+1]) {
                    x = 1;
                    while (a[prox] + a[prox+1] == 7 || a[prox] == a[prox+1]) {
                        a[prox] = x;
                        x++;
                    }
                    count++;
                }
                else {
                    x = 1;
                    while (a[i] + a[prox] == 7 || a[i] == a[prox]) {
                        a[i] = x;
                        x++;
                    }
                    count++;
                }
            }
        }
 
        cout << count << "
";
 
        t--;
    }
 
    return 0;
}