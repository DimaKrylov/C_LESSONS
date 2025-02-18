#include <stdio.h>
#include <stdlib.h>

typedef struct Date{
    int day;
    int month;
    int year;
} Date;

typedef struct Event {
    char event_name[25];
    Date date;
    char description[50];
} Event;

int main(){
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    Event* event = malloc(sizeof(Event) * num);

    for (int i = 0; i < num; i++){
        printf("Введите данные: ");
        scanf("%s %d %d %d %s", event[i].event_name, &event[i].date.day, &event[i].date.month, &event[i].date.year, event[i].description);
    }

    for (int i = 0; i < num; i++){
        printf("\nName_event: %s\nDate: %d/%d/%d\nDescription: %s\n", event[i].event_name, event[i].date.day, event[i].date.month, event[i].date.year, event[i].description);
    }
    return 0;
}