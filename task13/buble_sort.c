#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long
void buble_sort1(int *text, int zap){
    for(int i = 0; i < zap - 1; i++){
        for(int j = 0; j < zap - i - 1; j++){
            if(text[j] > text[j + 1]){
                int temp = text[j];
                text[j] = text[j + 1];
                text[j + 1] = temp;
            }
        }
    }
}
void buble_sort2(int *text, int zap){
    for(int i = 0; i < zap - 1; i++){
        for(int j = 0; j < zap - i - 1; j++){
            if(text[j] < text[j + 1]){
                int temp = text[j];
                text[j] = text[j + 1];
                text[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size = 10;
    int zap = 0;
    int *text = malloc(size * sizeof(int));
    printf("Введіть числа які потрібно відсортувати: ");
    while(1){
        if(zap == size){
            size = size * 2;
            text = realloc(text, size * sizeof(int));
        }
        scanf("%d", &text[zap]);
        zap++;
        char c = getchar();
        if(c == '\n'){
            break;
        }
    }
    printf("Вибери дію:  \n");
    printf("1.Сортування від меншого до більшого. \n");
    printf("2.Сортування від більшого до меншого. \n");
    printf("(1/2)? \n");
    int temp;
    scanf(" %d", &temp);
    if(temp == 1){
       buble_sort1(text,zap);
       for(int i = 0; i < zap; i++) {
          printf("%d ", text[i]);
       }
    }else{
         buble_sort2(text,zap);
       for(int i = 0; i < zap; i++) {
          printf("%d ", text[i]);
       }
    }
    free(text);
    return 0;
}
    



