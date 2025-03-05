#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int CheckStr(char *word){
   
    if (strncmp(word, "SS", 2) == 0){
        printf("Корабль %s найден\n", word);
        return 0;
    }
}

int main(){
    char ships[100][50];
    int num; 
    printf("Введите кол-во кораблей: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++){
        printf("Введите название корабля: ");
        scanf("%s", ships[i]);
    }

    for (int i = 0; i < num; i++){
        if (CheckStr(ships[i]) == 0){
        return 0;
        }  
    }
    printf("Корабль не найден");
}