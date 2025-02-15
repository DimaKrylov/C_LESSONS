#include <stdio.h>

int main(){
    int weight;
    printf("Введите вес: ");
    scanf("%d", &weight);


    if (weight % 4 == 0){
        int weight_in = weight / 4;
        printf("%d килограмм в каждом отсеке\n", weight_in);
    } else {
        printf("Невозможно\n");
    }
    return 0;
}