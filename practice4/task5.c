#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MEMORY_SIZE 1024

char *memory = NULL;
size_t memory_size = 0;

void alloc(size_t size) {
    if (memory != NULL) {
        printf("Память уже выделенна. Освободите её.\n");
        return;
    }
    memory = (char *)malloc(size);
    if (memory == NULL) {
        printf("Не удалось выделить память.\n");
        return;
    }
    memory_size = size;
    printf("Выделенно %zu байт памяти.\n", size);
}

void free_memory() {
    if (memory == NULL) {
        printf("Память не выделенна.\n");
        return;
    }
    free(memory);
    memory = NULL;
    memory_size = 0;
    printf("Паямть освобажденна.\n");
}

void write(const char *text) {
    if (memory == NULL) {
        printf("Память не выделена. Сначала используйте 'alloc'.\n");
        return;
    }
    size_t text_len = strlen(text);
    if (text_len >= memory_size) {
        printf("Текст слишком длинный для выделенной памяти.\n");
        return;
    }
    strncpy(memory, text, memory_size);
    printf("Текст записан в память.\n");
}

void print() {
    if (memory == NULL) {
        printf("Память не выделена. Сначала используйте 'alloc'.\n");
        return;
    }
    printf("Содержимое памяти: %s\n", memory);
}

void exit_program() {
    if (memory != NULL) {
        free(memory);
    }
    printf("Завершение программы.\n");
    exit(0);
}

typedef void (*command_function)(void);

struct command {
    const char *name;
    command_function func;
};

void handle_alloc(const char *arg) {
    size_t size = atoi(arg);
    if (size <= 0) {
        printf("Неверный размер.\n");
        return;
    }
    alloc(size);
}

void handle_write(const char *arg) {
    write(arg);
}

struct command commands[] = {
    {"alloc", (command_function)handle_alloc},
    {"free", (command_function)free_memory},
    {"write", (command_function)handle_write},
    {"print", (command_function)print},
    {"exit", (command_function)exit_program},
    {NULL, NULL}
};

int main() {
    char input[256];
    while (1) {
        printf("> ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            break;
        }

        char *cmd = strtok(input, " \n");
        char *arg = strtok(NULL, "\n");

        if (cmd == NULL) {
            continue;
        }

        int found = 0;
        for (int i = 0; commands[i].name != NULL; i++) {
            if (strcmp(cmd, commands[i].name) == 0) {
                if (arg != NULL && strcmp(cmd, "alloc") == 0) {
                    handle_alloc(arg);
                } else if (arg != NULL && strcmp(cmd, "write") == 0) {
                    handle_write(arg);
                } else {
                    commands[i].func();
                }
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Неизвестная команда %s\n", cmd);
        }
    }

    return 0;
}