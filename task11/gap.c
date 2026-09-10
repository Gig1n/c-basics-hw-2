#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int main() {
    int size = 10;
    int zap = 0;
    int res = 0;
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
    char text2[zap + 1];
    for(int i = 0; i < zap; i++){
        if(text[i] == ' '){
           continue;
        }
    text2[res] = text[i];
    res++;
    }
    text2[res] = '\0';
    text2[res] = '\0';
    for(int i = 0; i < res; i++){
        printf("%c", text2[i]);
    }
    printf("\n");
    free(text);
    return 0;
}