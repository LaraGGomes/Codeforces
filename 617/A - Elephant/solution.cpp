#include <iostream>
using namespace std;
 
int main() {
    int x, steps = 0;
 
    cin >> x;
 
    for (int i = 5; i > 0; i--) {
        if (x >= i) {
            steps += x / i;
 
            x -= i*(x / i);
        }
    }
 
    cout << steps;
 
    return 0;
}