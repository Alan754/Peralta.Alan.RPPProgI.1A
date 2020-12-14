#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void duplicarNumImpares(int numero []);



int main()
{

    int numero[2];





    printf("Ingrese un numero: ");
    scanf("%d",&numero[0]);

    printf("Ingrese un numero: ");
    scanf("%d",&numero[1]);



    duplicarNumImpares(numero);






    return 0;
}

void duplicarNumImpares(int numero [])
{
    int num;

    for(int i = 0; i<2 ; i++)
    {
        if(numero[i]% 2 == 0)
        {
            printf("El numero es par");
        }else
        {
            printf("El numero es impar %d: ",numero[i]*2);
        }
    }
}
