#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("1-> Cruzeiro \n2-> Atletico \n3-> Gremio \n4-> Santos \n");

    printf("Escolha algum desses numeros: ");
    scanf("%d", &num);

    if(num == 1){
        printf("Cruzeiro");
    }
    else if (num == 2)
    {
        printf("Atletico");
    }
    else if (num == 3)
    {
        printf("Gremio");
    }
    else if (num == 4)
    {
        printf("Santos");
    }
    else{
        printf("Esse time nao existe seu porra \n");
    };

    return 0;
}

