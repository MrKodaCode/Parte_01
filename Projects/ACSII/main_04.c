#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chr;

    printf("Escreva Uma letra: ");

    scanf("%c", &chr);

    printf("Letra: %c.\n", chr);

    printf("Valor em ACSII: %d.\n", chr);

    system("pause");
    return 0;
}
