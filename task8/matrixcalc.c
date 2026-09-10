#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int main() {
    int n ,m;
    printf("введіть 2 числа: ");
    scanf(" %d %d", &n, &m);
    int arr1[n][m];
    int arr2[n][m];
    int res[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr1[i][j] = rand() % 10;
            arr2[i][j] = rand() % 10;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("   |\n");
    printf("-------\n");
    printf("   |\n");
    printf("\n");

   
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("-------\n");
    printf("-------\n");
    printf("\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            res[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}