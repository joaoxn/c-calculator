#include <locale.h>
#include <stdio.h>
#include <windows.h>

void addition() {
    printf("\n");
    printf("============================\n");
    printf("Calculadora Simples - ADIÇÃO\n");
    printf("============================\n");

    float n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    printf("\n");
    printf("O resultado é: %f\n", n1 + n2);
}

void subtraction() {
    printf("\n");
    printf("===============================\n");
    printf("Calculadora Simples - SUBTRAÇÃO\n");
    printf("===============================\n");

    float n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    printf("\n");
    printf("O resultado é: %f\n", n1 - n2);
}

void multiplication() {
    printf("\n");
    printf("===================================\n");
    printf("Calculadora Simples - MULTIPLICAÇÃO\n");
    printf("===================================\n");

    float n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    printf("\n");
    printf("O resultado é: %f\n", n1 * n2);
}

void division() {
    printf("\n");
    printf("=============================\n");
    printf("Calculadora Simples - DIVISÃO\n");
    printf("=============================\n");

    float n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    printf("\n");
    printf("O resultado é: %f\n", n1 / n2);
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
            case 1: addition(); break;
            case 2: subtraction(); break;
            case 3: multiplication(); break;
            case 4: division(); break;
            case 0: exiting = 1; break;
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
