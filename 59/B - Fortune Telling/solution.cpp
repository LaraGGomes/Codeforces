#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int n, menor = 100;
    long int total = 0;
 
    cin >> n;
 
    int flores[n];
 
    for (int i = 0; i < n; i++) {
        cin >> flores[i];
        total += flores[i];
        if (flores[i] % 2 == 1 && flores[i] < menor) {
            menor  = flores[i];
        }
    }
 
    if (menor == 100) {
        menor = 0;
    }
 
    if (total % 2 == 0) {
        total -= menor;
    }
 
    if (total % 2 == 0) {
        cout << 0;
    }
 
    else {
        cout << total;
    }
 
    return 0;
}