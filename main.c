#include <locale.h>
#include <stdio.h>
#include <windows.h>

void menu() {
    int exiting = 0;
    while (!exiting) {
        printf("==========================\n");
        printf("Calculadora Simples - MENU\n");
        printf("==========================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("0. Sair\n");
        printf("Opção: ");
        int option;
        scanf("%d\n", &option);

        printf("\n");
        switch (option) {
            case 1: /*addition()*/; break;
            case 2: /*subtraction()*/; break;
            case 3: /*multiplication()*/; break;
            case 4: /*division()*/; break;
            case 0: exiting = 1; break;
            default: printf("'%d' não é uma opção!", option); break;
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
