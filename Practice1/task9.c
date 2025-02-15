#include <stdio.h>

int main(){
    double T;
    printf("Введите время в секундах: ");
    scanf("%lf", &T);

    int minutes = T / 60;
    float seconds = T - minutes * 60;

    printf("Ваше время: %1.lf секунд -> Новое время: %d минута %.1lf секунд", T, minutes, seconds);
    return 0;
}