#include <iostream>
using namespace std;
 
int main() {
    int notas[3], aux;
 
    for (int i = 0; i < 3; i++) {
        cin >> notas[i];
    }
 
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (notas[i] > notas[j]) {
                aux = notas[i];
                notas[i] = notas[j];
                notas[j] = aux;
            }
        }
    }
 
    if ((notas[2] - notas[0]) >= 10) {
        cout << "check again";
    }
 
    else {
        cout << "final " << notas[1];
    }
 
    return 0;
}