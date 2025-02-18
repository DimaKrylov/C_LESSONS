#include <stdio.h>
#include <stdlib.h>

typedef struct Employee{
    char name[25];
    char proffesion[25];
    float salary;
} Employee;

int main(){
    int num;
    scanf("%d", &num);

    Employee* employees = malloc(sizeof(Employee) * num);

    for (int i = 0; i < num; i++){
        scanf("%s %s %f", employees[i].name, employees[i].proffesion, &employees[i].salary);
    }

    for (int i = 0; i < num; i++){
        printf("\nName: %s\nPosition: %s\nSalary: %.2f\n", employees[i].name, employees[i].proffesion, employees[i].salary);
    }
    return 0;
}