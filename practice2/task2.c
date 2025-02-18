#include <stdio.h>
#include <stdlib.h>

typedef struct Item {
    char name[10];
    int count;
    float price;
} Item;

int main(){
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    Item* items = malloc(sizeof(Item) * num);

    for (int i = 0; i < num; i++){
        printf("Введите данные: ");
        scanf("%s %d %f", items[i].name, &items[i].count, &items[i].price);
    }

    for (int i = 0; i < num; i++){
        printf("\nName: %s\nAge: %d\nGPA: %.1f\n\n", items[i].name, items[i].count, items[i].price);
    }
    return 0;
}