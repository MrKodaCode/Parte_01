#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int idade;
    float altura;

    printf("Qual e seu Nome: \n");

    scanf("%s", &nome);

    printf("Qual e sua idade: \n");

    scanf("%d", &idade);

    printf("Qual e sua altura: \n");

    scanf("%f", &altura);



    printf("Seu nome e: %s \n", nome);

    printf("Sua idade e: %d \n", idade);

    printf("Sua altura e: %.2f \n", altura);

    return 0;
}
