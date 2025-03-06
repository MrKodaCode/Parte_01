#include <stdio.h>


int main() {

    char cal;
    float num1 , num2 , result;


    printf("Escolha um numero: ");
    scanf(" %f", &num1);

    printf("Escolha uma operacao dessas (*,+,-,/):  ");
    scanf(" %c", &cal);

    printf("Escolha outro numero: ");
    scanf(" %f", &num2);


    
    switch (cal)
    {
        case '*':
            
            result = num1 * num2;

        break;
        
        case '+':

            result = num1 + num2;
            
        break;

        case '-':

            result = num1 - num2;
            
        break;

        case '/':

            result = num1 / num2;
            
        break;


    }


    printf("O resultado de %.1f %c %.1f e igual a %.1f", num1,cal,num2,result);

    return 0;

}