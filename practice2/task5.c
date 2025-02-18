#include <stdio.h>
#include <stdlib.h>

typedef union Data{
    int num;
    char str[40];
    float num_f;
} Data;

int main(){
    int num;
    printf("Введите число: ");
    scanf("%d", &num);

    Data data;

    if (num == 1) {
        printf("Введите число: ");
        scanf("%d", &data.num);
        printf("Integer: %d\n", data.num);
    }
    else if (num == 2){
        printf("Введите число: ");
        scanf("%f", &data.num_f);
        printf("Float: %.2f\n", data.num_f);
    }

    else if (num == 3){
        printf("Введите число: ");
        scanf("%s", data.str);
        printf("String: %s\n", data.str);
    }

    else printf("Incorrect\n");
    return 0;
}