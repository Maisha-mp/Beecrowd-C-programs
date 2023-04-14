#include <stdio.h>

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 float i,j,k;

    scanf("%f", &i);


    if(i>=0 && i<=400.00)
    {
        j= (i * 0.15)+i;

        k= j-i;

    printf("Novo salario: %.2f\n",j);

    printf("Reajuste ganho: %.2f\n",k);

    printf("Em percentual: 15 %%\n");
    }

       if(i>=400.01 && i<=800.00)
    {
        j= (i * 0.12)+i;

        k= j-i;

    printf("Novo salario: %.2f\n",j);

    printf("Reajuste ganho: %.2f\n",k);

    printf("Em percentual: 12 %%\n");
    }


    if(i>=800.01 && i<=1200.00)
    {
        j= (i * 0.10)+i;

        k= j-i;

    printf("Novo salario: %.2f\n",j);

    printf("Reajuste ganho: %.2f\n",k);

    printf("Em percentual: 10 %%\n");
    }


    if(i>=1200.01 && i<=2000.00)
    {
        j= (i * 0.07)+i;

        k= j-i;

    printf("Novo salario: %.2f\n",j);

    printf("Reajuste ganho: %.2f\n",k);

    printf("Em percentual: 7 %%\n");
    }


    if(i>2000.00)
    {
        j= (i * 0.04)+i;

        k= j-i;

    printf("Novo salario: %.2f\n",j);

    printf("Reajuste ganho: %.2f\n",k);

    printf("Em percentual: 4 %%\n");
    }

    return 0;
}
