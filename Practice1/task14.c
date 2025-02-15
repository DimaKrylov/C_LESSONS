#include <stdio.h>

int main(){
    float weight;
    printf("Введите вес объекта: ");
    scanf("%f", &weight);

    float weight_on = weight * (1.0/6);
    printf("Масса объекта составляет %.1f\n", weight_on);

    return 0;
}