#include <stdio.h>
#include <stdlib.h>


int main()
{
    float x = 5.88;
    int num;

    printf("Digite Um valor: ");

    scanf("%d", &num);

    printf("O valor e: %.2f", num * x);

    return 0;
}

