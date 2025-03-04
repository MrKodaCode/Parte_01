#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    //tabuada
    SetConsoleOutputCP(65001);

    int num = 0;
    int i;

    printf("Escreva algum numero: ");
    scanf("%d", &num);

    for (i = 0; i < 10; i++)
    {
        printf("%d + %d = %d \n", num,i, num + i);
    }
    

    return 0;
}