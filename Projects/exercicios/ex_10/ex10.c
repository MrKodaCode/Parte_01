#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    // converter graus

    int g;
    int result;

    printf("Digite uma quantidade de Graus de temperatura: ");
    scanf("%d", &g);

    result = (g * 1.8) + 32;

    printf("Resultado: %d", result);
    
}


