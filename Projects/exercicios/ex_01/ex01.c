#include <stdio.h>
#include <stdlib.h>


int main()
{
    //descobri se e par ou impa
    
    int num;

    printf("Digite um numero: \n");

    scanf("%d", &num);

    if((num / 2) * 2 == num){
        printf("%d e um numero par \n", num);

    }
    else{
        printf("%d e um numero impa \n", num);

    };
    system("pause");

    return 0;
}

