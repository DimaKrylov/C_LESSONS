#include <stdio.h>

int main(){
    int corner;
    printf("Введите угол: ");
    scanf("%d", &corner);

    if (corner <= -180 || corner >= 180){
        printf("Угол не находится в диапазоне");
    } else {
        printf("Угол находится в диапазоне");
    }

    return 0;
}