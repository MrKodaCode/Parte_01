#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    // Ccontagem regressiva

    int num;
    int i;

    printf("Escreva algum numero: ");
    scanf("%d", &num);

    for (i = num; i >= 0; i--)
    {

        printf("%d \n", i);
    }

    return 0;
}


