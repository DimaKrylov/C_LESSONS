#include <stdio.h>

int main(){
    char letter; 
    printf("Введите букву: ");
    scanf("%с", &letter);
    if (letter >= 65 || letter <= 90){
        printf("Символ %c входит в данный диапазон \n", letter);
    } else {
        printf("Символ %c не входит в данный диапазон\n", letter);
    }
    return 0;
}