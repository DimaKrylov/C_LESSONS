#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char input[] = "Гагарин;Титов;Армстронг";
    const char* symbol = ";";

    char* pch = strtok(input, symbol);

    while (pch != NULL){
        printf("%s\n", pch);
        pch = strtok(NULL, symbol);
    }
    return 0;
}