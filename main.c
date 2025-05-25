#include <locale.h>
#include <stdio.h>
#include <windows.h>

void operation(char name[], float (*func)(float, float)) {
    printf("\n");

    const size_t name_len = strlen(name);

    printf("====================");
    for (size_t i = 0; i < name_len; i++) {
        printf("=");
    }
    printf("\nCalculadora Simples - %s\n", name);
    printf("====================");
    for (size_t i = 0; i < name_len; i++) {
        printf("=");
    }

    float n1, n2;
    printf("\nDigite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    printf("\n");
    printf("O resultado é: %f\n", func(n1, n2));
}

float add(const float n1, const float n2) {
    return n1 + n2;
}

float subtract(const float n1, const float n2) {
    return n1 - n2;
}

float multiply(const float n1, const float n2) {
    return n1 * n2;
}

float divide(const float n1, const float n2) {
    return n1 / n2;
}

void menu() {
    int exiting = 0;
    while (!exiting) {
        printf("\n");
        printf("==========================\n");
        printf("Calculadora Simples - MENU\n");
        printf("==========================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("0. Sair\n");
        printf("Opção:  ");
        int option;
        scanf("%d", &option);

        printf("\n");
        switch (option) {
            case 1: operation("ADIÇÃO", add);                    break;
            case 2: operation("SUBTRAÇÃO", subtract);            break;
            case 3: operation("MULTIPLICAÇÃO", multiply);        break;
            case 4: operation("DIVISÃO", divide);                break;
            case 0: exiting = 1;                                      break;
            default: printf("'%d' não é uma opção!\n", option); break;
        }
    }
}

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    menu();

    return 0;
}
