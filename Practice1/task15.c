#include <stdio.h>

int main(){
    double kbps;
    double mb;

    printf("Введите скорость в Кбит/с: ");
    scanf("%lf", &kbps);

    printf("Введите объем данных в Мб: ");
    scanf("%lf", &mb);

    double kbit = mb * 8000;
    double kbit_seconds = kbit / kbps;
    double kbit_minutes = kbit_seconds / 60; 
    
    printf("Скорость: %.0f минут\n", kbit_minutes);
    return 0;
}