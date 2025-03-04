#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);

    // Media de notas
    int num1;
    int num2;
    int num3;
    int result;

    printf("Escreva algum numero: ");
    scanf("%d", &num1);

    printf("Escreva algum numero: ");
    scanf("%d", &num2);

    printf("Escreva algum numero: ");
    scanf("%d", &num3);

    result = (num1 + num2 + num3) / 3;

    if(result >= 6){
        printf("Sua Nota foi %d e Voce passou", result);
    }
    else{
        printf("Sua Nota foi %d e Voce não passou", result);
    }

    return 0;
}



