#include <stdio.h>
#define ll long long
int main() {
    ll min, max;
    printf("Введіть 2 числа: \n");
    scanf(" %lld %lld", &min, &max);
    if(min > max){
        ll hz = min;
        min = max;
        max = hz;
    }
    int count = 0;
    ll a = 1, b = 2;
    while (a <= max) {
        if (a >= min) {
            printf(" %lld\n", a);
        }
        long long next = a + b;
        a = b;
        b = next;
    }
    return 0;
}