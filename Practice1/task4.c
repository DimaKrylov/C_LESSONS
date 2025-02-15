#include <stdio.h>

int main(){
    int date_today = 20250215;
    int data;
    printf("Введите сегодняшюю дату в формате 'годмесяцчисло': ");
    scanf("%d", &data);
    if (data > date_today){
        printf("Дата находится в будущем", data);
    } else {
        printf("Дата находится в прошлом\n", data);
    }
    return 0;
}