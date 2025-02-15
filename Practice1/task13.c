#include <stdio.h>

int main(){
    int astronauts;
    printf("Введите кол-во космонавтов: ");
    scanf("%d", &astronauts);


    if (astronauts % 2 == 0){
        printf("Можно доставить без остатка\n");
    } else {
        printf("Нельзя доставить без остатка\n");
    }
    return 0;
}