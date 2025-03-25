#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void remove_spaces(char *str) {
    char *write_ptr = str;
    while (*str != '\0') {
        if (*str != ' ') {
            *write_ptr = *str;
            write_ptr++;
        }
        str++;
    }
    *write_ptr = '\0';
}

void replace_vowels(char *str) {
    char vowels[] = "aeiouAEIOU";
    while (*str != '\0') {
        if (strchr(vowels, *str)) {
            *str = '*';
        }
        str++;
    }
}

void invert_case(char *str) {
    while (*str != '\0') {
        if (isupper(*str)) {
            *str = tolower(*str);
        } else if (islower(*str)) {
            *str = toupper(*str);
        }
        str++;
    }
}

int main() {
    char *input_str = (char *)malloc(256 * sizeof(char)); // Выделение памяти под строку
    if (input_str == NULL) {
        printf("Ошибка выделения памяти!\n");
        return 1;
    }

    printf("Введите строку: ");
    fgets(input_str, 256, stdin);  // Чтение строки с пробелами
    input_str[strcspn(input_str, "\n")] = '\0';  // Убираем символ новой строки

    printf("Выберите операцию:\n");
    printf("1. Удаление пробелов\n");
    printf("2. Замена всех гласных на '*'\n");
    printf("3. Инвертирование регистра символов\n");
    int choice;
    scanf("%d", &choice);
    getchar();  // Для захвата символа новой строки после ввода числа

    // Указатель на функцию-обработчик
    void (*handler)(char *);

    switch (choice) {
        case 1:
            handler = remove_spaces;
            break;
        case 2:
            handler = replace_vowels;
            break;
        case 3:
            handler = invert_case;
            break;
        default:
            printf("Неверный выбор!\n");
            free(input_str);
            return 1;
    }

    // Применение выбранной функции
    handler(input_str);
    printf("Результат: %s\n", input_str);

    free(input_str); // Освобождение памяти
    return 0;
}