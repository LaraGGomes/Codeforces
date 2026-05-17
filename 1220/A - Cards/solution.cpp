#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, zero = 0, um = 0;
    
    cin >> n;
    
    for (int i = 0; i<n; i++) {
        char x;
        cin >> x;
        
        if(x == 'z') zero++;
        if(x == 'n') um++;
    }
    
    for (int i = 0; i<um; i++) {
        cout << "1 ";
    }
    for (int i = 0; i<zero; i++) {
        cout << "0 ";
    }
    
 
    return 0;
}