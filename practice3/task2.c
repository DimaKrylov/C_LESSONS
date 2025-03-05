#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    char signal[] = "###OK*#*";

    char symbols[] = "#*";

    size_t start = strspn(signal, symbols);
    size_t lenght = strcspn(signal + start, symbols);
    char *message = strndup(signal+start, lenght);

    printf("%s\n", message);
    printf("%zu\n", lenght);
    
    free(message);

    return 0;  
}