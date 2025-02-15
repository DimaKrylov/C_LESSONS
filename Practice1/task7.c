#include <stdio.h>

int main(){
    float x;

    printf("Введите ГГц: ");
    scanf("%f", &x);


    if (x < 2.5 || x > 3.5){
        printf("Орбита нестабильна \n");
    } else {
        printf("Орбита стабильна\n");
    }
    return 0;
}