// Sushi for two
 
/* 
The first line contains a single integer n
 (2≤n≤100000
) — the number of pieces of sushi.
 
The second line contains n
 integers t1
, t2
, ..., tn
 (ti=1
, denoting a sushi with tuna or ti=2
, denoting a sushi with eel), representing the types of sushi from left to right.
 
It is guaranteed that there is at least one piece of sushi of each type. Note that it means that there is at least one valid continuous segment.
 
Output
Print a single integer — the maximum length of a valid continuous segment.
*/
 
#include <stdio.h>
 
int main() {
    int quant, j;
    int cont1 = 1, cont2 = 1, total = 0;
 
    scanf("%d", &quant);
 
    int sushi[quant];
 
    for (int i = 0; i < quant; i++) {
        scanf("%d", &sushi[i]);
    }
 
 
    for (int i = 0; i < (quant - 1); i = i) {
        for (j = i + 1; sushi[i] == sushi[j]; j++) {
            cont1++;
        }
 
        for (j = j; j < (quant - 1) && sushi[j] == sushi[j+1]; j++) {
            cont2++;
        }
 
        if (cont1 >= cont2 && (cont2*2) > total) {
            total = 2 * cont2;
        }
        
        else if (cont1 < cont2 && (cont1*2) > total) {
            total = 2 * cont1;
        }
 
        i = j;
        cont1 = cont2;
        cont2 = 1;
    }
 
    printf("%d", total);
 
    return 0;
}