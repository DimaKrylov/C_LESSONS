#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
    char name[10];
    int age;
    float gpa;
} Student;

int main(){
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    Student* students = malloc(sizeof(Student) * num);

    for (int i = 0; i < num; i++){
        printf("Введите данные: ");
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    for (int i = 0; i < num; i++){
        printf("\nName: %s\nAge: %d\nGPA: %.1f\n\n", students[i].name, students[i].age, students[i].gpa);
    }
    return 0;
}