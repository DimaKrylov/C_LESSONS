#include <stdio.h>
#include <stdlib.h>


typedef struct Student{
    char name[40];
    int age;
    float gpa;
} Student;

int main() {
    int num;
    scanf("%d", &num);
    Student* students = malloc(sizeof(Student) * num);

    for (int i = 0; i < num; i++) {
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].gpa);
    }

    for (int i = 0; i < num; i++) {
        Student* pointer = &students[i];
        printf("Name: %s\nAge: %d\nGPA: %.1f\n\n", pointer->name, pointer->age, pointer->gpa);
    }

    return 0;
}