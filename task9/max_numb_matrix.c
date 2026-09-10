#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int main() {
    int n, m;
    printf("Введіть 2 числа: ");
    scanf(" %d %d", &n, &m);
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j] = rand() % 10 + 1;
        }
    }
    int max = arr[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] > max)max = arr[i][j];
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < n;i++){
        for(int j = 0 ; j < m; j++){
             if(arr[i][j] == max){
                printf("Найбільший елемент %d, він знаходиться на %d рядку, %d стовпцю \n", max, i+1, j+1);
                return 0;
             }
        }
    }
    return 0;
}