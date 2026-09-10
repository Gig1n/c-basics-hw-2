#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long
void calculator(int i, char text[], int *zap, int *res) {
    *res = 1;
    for(int j = i + 1; j < *zap; ){
        if(text[i] == text[j]){
            (*res)++;
            for(int k = j; k < *zap; k++){
                text[k] = text[k + 1];
            }
            (*zap)--;
        }else{
            j++;
        }
    }
    printf("%c %d\n", text[i], *res);
}


int main() {
    int size = 10;
    int zap = 0;
    int max = 0;
    char *text = malloc(size * sizeof(char));
    printf("Введіть текст: ");
    while(1){
        if(zap == size - 1){
            size = size * 2;
            text = realloc(text, size * sizeof(char));
        }
        scanf("%c", &text[zap]);
        if(text[zap] == '\n'){
            break;
        }
        zap++;
    }
    text[zap] = '\0';
    int res = 0;
    char simb;
    printf("Усіх символів: %d\n", zap);
    for(int i = 0; i < zap; i++){
    res = 0;
    calculator(i, text, &zap, &res);
    if(res > max){
        max = res;
        simb = text[i];
    }
}
    printf("Символ який найбільше зустрічається це: %c", simb);
    free(text);
    return 0;
}