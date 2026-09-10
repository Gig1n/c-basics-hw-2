#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int main() {
    int n;
    printf("Введіть число: ");
    scanf(" %d", &n);
    for(int i = 0; i <= 7; i++){
        printf("%d ", n);
        n++;
    }
    return 0;
}