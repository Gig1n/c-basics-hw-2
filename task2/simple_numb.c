#include <stdio.h>
#define ll long long
int simple(int n, int i) {
    if (n < 2) {
        return 0;
    }

    if (i * i > n) {
        return 1;
    }

    if (n % i == 0) {
        return 0;
    }

    return simple(n, i + 1);
}

int main() {
    ll n;
    printf("Введіть число:\n");
    scanf("%lld", &n);
    if (simple(n, 2)) {
        printf("Число просте\n");
        }
        else {
        printf("Число не просте\n");
        }
    return 0;
}