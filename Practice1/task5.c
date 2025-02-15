#include <stdio.h>
#include <math.h>

int main(){
    double static_speed;
    double fact_speed;

    printf("Введите статическую скорость: ");
    scanf("%lf", &static_speed);

    printf("Введите фактическую скорость: ");
    scanf("%lf", &fact_speed);

    if (fabs(static_speed - fact_speed) > 0.1){
        printf("Орбита нестабильна \n");
    } else {
        printf("Орбита стабильна\n");
    }
    return 0;
}