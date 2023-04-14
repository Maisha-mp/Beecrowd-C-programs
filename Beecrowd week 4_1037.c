#include<stdio.h>


int main() {



    float i;

    scanf("%f", &i);

    if(i>=0 && i<=100.00)

    {
        if(i>=0 && i<=25.00)
    {
        printf("Intervalo [0,25]\n");
    }

        if(i>25.00 && i<=50.00)
    {
        printf("Intervalo (25,50]\n");

    }

          if(i>50.00 && i<=75.00)
    {
        printf("Intervalo (50,75]\n");
    }

       if(i>75.00 && i<=100.00)
    {
        printf("Intervalo (75,100]\n");
    }
    }

   else
    {
         printf("Fora de intervalo\n");
    }

    return 0;
}
