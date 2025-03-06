#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    //jogo de adivinhar

    srand(time(NULL));

    int numero1;
    int num;
    char escolha;
    

    do{  
        numero1 = (rand() % 100) + 1;

        do{

            printf("Tente adivinha qual o numero certo de 1 a 100: ");
            scanf("%d", &num);

            if(num == numero1){

                printf("Voce acertou!!");
            }
            else if(num > numero1){

                printf("%d e maior que o numero aleatorio \n", num);


                }else{
                printf("%d e menor que o numero aleatorio \n", num);

            }

        }while(num != numero1);

    
        printf("Voce quer continue? s/n \n");
        scanf(" %c", &escolha);

        

    }while(escolha == 's' || escolha == 'S');
        
    
    system("pause");
    return 0;
}
