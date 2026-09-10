#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int main() {
    ll min , max;
    printf("Введіть 2 числа (min, max): ");
    scanf(" %lld %lld", &min, &max);
    ll res = (max - min) + 1;
    for(ll i = 0; i < res; i++){
        printf("%lld ", min);
        min++;
    }
    return 0;
}
    
