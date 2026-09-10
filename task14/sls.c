#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#define ll long long


int main() {
    int count = 0;
    int size = 2;
    char (*logs)[500] = malloc(size * sizeof(*logs));
    while(1){
        char status[10];
        printf("Set status of log 1- INFO, 2- ERROR, (- to stop): ");
        scanf("%s", status);
        if(status[0] == '-'){
            break;
        }
        getchar();
        char message[400];
        printf("Set log message: ");
        fgets(message, 400, stdin);
        message[strcspn(message, "\n")] = '\0';
        if(count == size){
            size = size * 2;
            logs = realloc(logs, size * sizeof(*logs));
        }
        time_t now = time(NULL);
        struct tm *t = localtime(&now);
        if(status[0] == '1'){
            sprintf(logs[count],
                    "%04d-%02d-%02d | %02d:%02d:%02d | INFO - %s",
                    t->tm_year + 1900,
                    t->tm_mon + 1,
                    t->tm_mday,
                    t->tm_hour,
                    t->tm_min,
                    t->tm_sec,
                    message);
        }
        else if(status[0] == '2'){
            sprintf(logs[count],
                    "%04d-%02d-%02d | %02d:%02d:%02d | ERROR - %s",
                    t->tm_year + 1900,
                    t->tm_mon + 1,
                    t->tm_mday,
                    t->tm_hour,
                    t->tm_min,
                    t->tm_sec,
                    message);
        }
        else{
            printf("Wrong status\n");
            continue;
        }
        count++;
    }
    printf("\nLog journal:\n");
    for(int i = 0; i < count; i++){
        printf("%s\n", logs[i]);
    }
    free(logs);
    return 0;
}
