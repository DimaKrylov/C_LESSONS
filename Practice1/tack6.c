#include <stdio.h>
#include <math.h>
int main(){
    int astro;
    printf("Введите количество космонавтов: ");
    scanf("%d", &astro);
    int extra_astro = 0; 

    if (astro % 2 != 0 && astro % 3 != 0 && astro % 4 != 0){
        astro--;
        extra_astro++;
    }

    for (int mod4 = 0; mod4 <= astro / 4; mod4++) {
        for (int mod3 = 0; mod3 <= astro / 3; mod3++) {
            for (int mod2 = 0; mod2 <= astro / 2; mod2++) {
                if (4 * mod4 + 3 * mod3 + 2 * mod2 == astro) {
                    printf("Решение найдено:\n");
                    printf("4-х местные : %d\n", mod4);
                    printf("3-х местные : %d\n", mod3);
                    printf("2-х местные : %d\n", mod2);
                    printf("\n");
                }
            }
        }
    }

    printf("Лишние космонавты: %d\n", extra_astro); 
    return 0;
}