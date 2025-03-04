#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main()
{
    int num;
    int i;
    int result;

    printf("Escreva algum numero: ");
    scanf("%d", &num);

    for (i = 1; i < num + 1; i++)
    {
        result = num * (i * num);

        printf("%d * %d = %d \n", num, i, result);
    }

    return 0;
}
