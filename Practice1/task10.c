#include <stdio.h>

int main(){
    int n;
    printf("Введите температуру: ");
    scanf("%d", &n);

    if (n <= -150 || n >= 120){
        printf("Вес не находится в диапазоне");
    } else {
        printf("Вес находится в диапазоне");
    }

    return 0;
}