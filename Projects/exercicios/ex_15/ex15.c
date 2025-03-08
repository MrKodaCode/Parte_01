#include <stdio.h>


int main()
{
    int i;
    int j;
    int altura = 100;

    for (i = 1; i <= altura; ++i)
    { 
        for (j = 0; j < i; ++j)
        { 
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}


