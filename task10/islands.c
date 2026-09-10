#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long
void rec(int i, int j, int n, int m, char arr[n][m]) {

    if(i < 0 || i >= n || j < 0 || j >= m)return;
    if(arr[i][j] == '0')return;
    arr[i][j] = '0';
    rec(i - 1, j, n, m, arr);
    rec(i + 1, j, n, m, arr);
    rec(i, j - 1, n, m, arr);
    rec(i, j + 1, n, m, arr);
}

int main() {
    int n, m;
    printf("Введіть 2 числа: ");
    scanf(" %d %d", &n, &m);
    char arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf(" %c", &arr[i][j]);
        }
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == '1'){
                rec(i, j, n, m, arr);
                 res ++;
                }
        }
    }
    printf("Тут є %d островів\n", res);
    return 0;
}