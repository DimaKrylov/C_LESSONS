#include <stdio.h>
#include <stdlib.h>

typedef union Grade{
    int num;
    char let[10];
} Grade;

int main(){
    int n;
    printf("Введите число: ");
    scanf("%d", &n);
    Grade* grades = malloc(sizeof(Grade) * n);

    for (int i = 0; i < n; i++){
        int type;
        printf("Введите число: ");
        scanf("%d", &type);
        if (type == 1) {
            printf("Введите число: ");
            scanf("%d", &grades[i].num);
            printf("Grade: %d\n", grades[i].num);
        } else if (type == 2) {
            printf("Введите букву: ");
            scanf(" %s", grades[i].let);
            printf("Grade: %s\n", grades[i].let);
        }
    }
    return 0;
}