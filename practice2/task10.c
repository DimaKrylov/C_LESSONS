#include <stdio.h>
#include <stdlib.h>

typedef struct Course{
    char name[15];
    int credits;
    char profession[40];
} Course;

int main(){
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    Course* courses = malloc(sizeof(Course) * num);

    for (int i = 0; i < num; i++){
        printf("Введите данные: ");
        scanf("%s %d %s", courses[i].name, &courses[i].credits, courses[i].profession);
    }

    for (int i = 0; i < num; i++){
        printf("\nCourse: %s\nCredits: %d\nProfessor: %s\n", courses[i].name, courses[i].credits, courses[i].profession);
    }
    return 0;
}