#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(){
    char code[] = "LAUNCH-2025";
    char input[100];
    printf("Введите код для запуска: ");
    scanf("%s", input);

    int result = strcasecmp(code, input);

    if (result == 0){
        printf("Код принят");
        system("shutdown -h now");
    } else {
        printf("Ошибка!!! Неверный код");
    }
    return 0;
}