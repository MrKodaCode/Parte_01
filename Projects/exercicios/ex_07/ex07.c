#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main()
{
    //Calcular o valor Fatorial

    int num;
    int i;
    long long result = 1;

    printf("Escreva algum numero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        result *= i;

        printf("%d * %d = %d \n", num, i, result);
    }

    

    return 0;
}
