#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n, tam;
    string s, nome;
    char aux;
 
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> tam;
        cin >> s;
        cin >> nome;
 
        for (int j = 0; j < tam; j++) {
            for (int k = j + 1; k < tam; k++) {
                if (s[j] > s[k]) {
                    aux = s[j];
                    s[j] = s[k];
                    s[k] = aux;
                }
                
                if (nome[j] > nome[k]) {
                    aux = nome[j];
                    nome[j] = nome[k];
                    nome[k] = aux;
                }
            }
        }
 
        for (int j = 0; j < tam; j++) {
            if (nome[j] != s[j]) {
                cout << "NO
";
                break;
            }
 
            else {
                if (j == tam - 1) {
                    cout << "YES
";
                }
            }
        }
    }
 
    return 0;
}