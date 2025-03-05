#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    const char report[200];
    printf("Введите текст: ");
    scanf("%s", report);

    char *result = strdup(report);

    printf("Новый текст: %s", result);
    free(result);

    return 0;
}