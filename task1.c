#include <stdio.h>

int main(){
    int num; 
    printf("Введите расстояние: ");
    scanf("%d", &num);
    if (num > 500){
        printf("Вы не сможете доехать \n");
    } else {
        printf("Вы сможете доехать \n");
    }
    return 0;
}