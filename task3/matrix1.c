#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    printf("Введіть число: \n");
    scanf(" %d", &n);
    int prog = 2 * n - 1;
    int arr[prog][prog];

    for(int i = 0; i < prog; i++){
        for(int j = 0 ; j < prog;j++){
            if(i == 0 || i == prog - 1 || j == 0 || j == prog - 1){
               arr[i][j] = n;
               continue;
            }
            int res1 = i;
            if(j < res1){
                res1 = j;
            }
            if(prog - 1 - i < res1){
                res1 = prog - 1 - i;
            }
            if(prog - 1 - j < res1){
                res1 = prog - 1 - j;
            }
            arr[i][j] = n - res1;
        }
        printf("\n");
    }
    for(int i = 0; i < prog; i++){
        for(int j = 0; j < prog; j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}