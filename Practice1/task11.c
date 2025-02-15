#include <stdio.h>

int main(){
    float n;
    printf("Введите кол-во запаса кислорода (в процентах): ");
    scanf("%f", &n);

    if (n < 15){
        printf("Включите аварийную систему");
    } else {
        printf("Все в порядке");
    }

    return 0;
}