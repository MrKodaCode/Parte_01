#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    
    int num01;
    int num02;

    printf("Escrevar um numero: ");
    scanf("%d", &num01);

    printf("Escrevar outro numero: ");
    scanf("%d", &num02);

    if(num01 > num02){

        printf("%d e maior que %d", num01 , num02);
    }
    else if(num01 < num02){
        printf("%d e maior que %d", num02, num01);
    }
    else{
        printf("%d e %d são iguais", num01, num02);
    }
    {
        /* code */
    }
    

    return 0;
}
