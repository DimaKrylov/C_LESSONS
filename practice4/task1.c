#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Функция для преобразования строки в верхний регистр
void toUpper(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

// Функция для преобразования строки в нижний регистр
void toLower(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Функция для переворота строки
void reverse(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Структура для хранения команды и указателя на функцию
typedef struct {
    char *command;
    void (*function)(char *);
} Command;

// Массив структур команд
Command commands[] = {
    {"upper", toUpper},
    {"lower", toLower},
    {"reverse", reverse},
    {"exit", NULL}
};

// Функция для выполнения команды
bool executeCommand(char *command, char *str) {
    for (int i = 0; i < sizeof(commands) / sizeof(commands[0]); i++) {
        if (strcmp(command, commands[i].command) == 0) {
            if (commands[i].function != NULL) {
                commands[i].function(str);
            }
            return commands[i].function != NULL;
        }
    }
    printf("Неизвестная команда: %s\n", command);
    return true;
}

int main() {
    char command[50];
    char str[100];

    while (true) {
        printf("Введите команду (upper, lower, reverse, exit): ");
        scanf("%s", command);

        if (strcmp(command, "exit") == 0) {
            break;
        }

        printf("Введите строку: ");
        scanf(" %[^\n]s", str); // Считываем строку с пробелами

        if (!executeCommand(command, str)) {
            break;
        }

        printf("Результат: %s\n", str);
    }

    return 0;
}