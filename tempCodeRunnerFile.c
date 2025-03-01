#include <stdio.h>


void binom(int n);
int main() {
    int linenumber;
    printf("\nLutfen satir sayisi giriniz  ");
    scanf("%d", &linenumber);
    binom(linenumber);
    return 0;
}
void binom(int n) {
    int i, j, num,bosluk;
    for (i = 0; i < n; i++) {
        
        for ( bosluk = 0; bosluk < n - i ; bosluk++) {
            printf("   ");
        }

        num = 1; 
        for (j = 0; j <= i; j++) {
            printf("%5d", num);
            num = num * (i - j) / (j + 1); 
        }
        printf("\n");
    }
}
