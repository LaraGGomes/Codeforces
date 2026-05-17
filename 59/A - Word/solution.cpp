#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string palavra;
    int min = 0, mai = 0;
 
    cin >> palavra;
 
    for (char letra : palavra) {
        if (letra < 97) {
            mai++;
        }
        else {
            min++;
        }
    }
 
    if (min >= mai) {
        for (int i = 0; i < (min+mai); i++) {
            if (palavra[i] < 97) {
                palavra[i] += 32;
            }
        }
    }
 
    else {
        for (int i = 0; i < (min+mai); i++) {
            if (palavra[i] >= 97) {
                palavra[i] -= 32;
            }
        }
    }
 
    cout << palavra;
 
    return 0;
}