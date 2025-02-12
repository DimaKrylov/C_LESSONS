#include <stdio.h>

int main(){
    int num; 
    printf("Введите массу: ");
    scanf("%d", &num);
    if (num < 90 && num > 60){
        printf("Вы попали на корабль, кайф \n");
    } else {
        printf("Вы не попали :((((\n");
    }
    return 0;
}