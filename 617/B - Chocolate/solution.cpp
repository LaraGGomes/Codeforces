#include <iostream>
using namespace std;
 
int main() {
    int n, j, nuts = 0, zeros;
    unsigned long long int total = 0;
 
    cin >> n;
 
    int a[n];
 
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
        if (a[i] == 1) {
            nuts++;
            total = 1;
        }
    }
 
    for (int i = 0; i < n; i++) {
        zeros = 1;
        if (a[i] == 1) {
            nuts--; 
 
            if (nuts != 0) {
                for(j = i + 1; j < n; j++) {
                    if (a[j] == 0) {
                        zeros++;
                    }
                    else {
                        break;
                    }
                }
 
                total *= zeros;
                i = j - 1;
            }
        }
    }
 
    cout << total;
 
    return 0;
}