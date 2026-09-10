#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int n , m;
    printf("Введіть 2 числа: \n");
    scanf(" %d %d", &n, &m);
    printf("Введіть символ: ");
    char simbol;
    scanf(" %c", &simbol);
    for(int i = 0; i < n; i++){
        for(int i = 0 ; i < m; i++){
            printf("%c", simbol);
        }
        printf("\n");
    }
    return 0;
}
