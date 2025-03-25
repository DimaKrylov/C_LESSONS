#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int count_vowels(const char *str) {
    int count = 0;
    while (*str) {
        char c = tolower(*str);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int compare_alphabetic(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int compare_length(const void *a, const void *b) {
    size_t len_a = strlen(*(const char **)a);
    size_t len_b = strlen(*(const char **)b);
    if (len_a < len_b) return -1;
    if (len_a > len_b) return 1;
    return 0;
}

int compare_vowels(const void *a, const void *b) {
    int vowels_a = count_vowels(*(const char **)a);
    int vowels_b = count_vowels(*(const char **)b);
    if (vowels_a < vowels_b) return -1;
    if (vowels_a > vowels_b) return 1;
    return 0;
}

typedef int (*CompareFunction)(const void *, const void *);

int main() {
    char input[100];
    char *strings[100];
    int count = 0;

    printf("Введите строки (для завершения введите 'end'):\n");
    while (1) {
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0'; 

        if (strcmp(input, "end") == 0) {
            break;
        }

        strings[count] = (char *)malloc((strlen(input) + 1) * sizeof(char));
        strcpy(strings[count], input);
        count++;
    }

    int choice;
    printf("Выберите режим сортировки:\n");
    printf("1. По алфавиту\n");
    printf("2. По длине строки\n");
    printf("3. По количеству гласных букв\n");
    printf("Ваш выбор: ");
    scanf("%d", &choice);

    CompareFunction compare = NULL;
    switch (choice) {
        case 1:
            compare = compare_alphabetic;
            break;
        case 2:
            compare = compare_length;
            break;
        case 3:
            compare = compare_vowels;
            break;
        default:
            printf("Неверный выбор!\n");
            for (int i = 0; i < count; i++) {
                free(strings[i]);
            }
            return 1;
    }

    qsort(strings, count, sizeof(char *), compare);

    printf("Отсортированные строки:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", strings[i]);
    }

    for (int i = 0; i < count; i++) {
        free(strings[i]);
    }

    return 0;
}