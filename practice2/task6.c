#include <stdio.h>
#include <stdlib.h>

typedef enum EngineType{
    Gasoline, 
    Diesel, 
    Electric
} EngineType;

typedef struct Vehicle{
    int year;
    char brand[50];
    char model[50];
    EngineType engine;
} Vehicle;

int main() {
    int n;
    printf("Введите число: ");    
    scanf("%d", &n);
    Vehicle* vehicles = malloc(sizeof(Vehicle) * n);

    for (int i = 0; i < n; i++) {
        printf("Введите данные: ");  
        scanf("%s %s %d %d", vehicles[i].brand, vehicles[i].model, &vehicles[i].year, &vehicles[i].engine); 
    }

    for (int i = 0; i < n; i++) {
        printf("\nVehicle: %s %s\nYear: %d\nEngine Type: ", vehicles[i].brand, vehicles[i].model, vehicles[i].year);

        switch(vehicles[i].engine){
            case Gasoline: printf("Gasoline\n\n"); break;
            case Diesel: printf("Diesel\n\n"); break;
            case Electric: printf("Elecrtic\n\n"); break;
        }
    }
    return 0;
}