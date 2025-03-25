#include <stdio.h>
#include <stdlib.h>

typedef double (*operation)(double, double);

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Ошибка: деление на ноль!\n");
        exit(1);
    }
}

operation get_operation(char op) {
    switch (op) {
        case '+':
            return add;
        case '-':
            return subtract;
        case '*':
            return multiply;
        case '/':
            return divide;
        default:
            printf("Ошибка: неизвестная операция '%c'\n", op);
            exit(1);
    }
}

int main() {
    double num1, num2;
    char op;

    printf("Введите выражение (например, 12 + 34): ");
    if (scanf("%lf %c %lf", &num1, &op, &num2) != 3) {
        printf("Ошибка ввода.\n");
        return 1;
    }


    operation op_func = get_operation(op);

    double result = op_func(num1, num2);
    printf("Результат: %.2lf\n", result);

    return 0;
}