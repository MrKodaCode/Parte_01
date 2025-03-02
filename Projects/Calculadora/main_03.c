#include <stdio.h>
#include <stdlib.h>

int main()
{
    int _num01;
    int _num02;

    printf("Numero 1: ");

    scanf("%d", &_num01);

    printf("Numero 2: ");

    scanf("%d", &_num02);

    printf("Resultado: %d \n", _num01 + _num02);

    system("pause");
    return 0;
}
