#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    // converter graus

    int num;
    int i;
    int result;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = num; i < 100; i++)
    {
        result = i + (i -1);
        
        printf("%d \n", result);
    }
    
    
}



