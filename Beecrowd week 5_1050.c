#include<stdio.h>

int main()

{
    int b, a[8]= {61, 71, 11, 21,32, 19, 27, 31};

    scanf("%d", &b);

    if (b == a)
    {
        if(b == a[0])
        {
            printf("Brasilia\n");
        }

        if(b == a[1])
        {
            printf("Salvador\n");
        }

        if(b == a[2])
        {
            printf("Sao Paulo\n");
        }

        if (b == a[3])
        {
            printf("Rio De Janairo\n");
        }

        if (b == a[4])
        {
            printf("Juiz de Fora\n");
        }

        else if (b == a[5])
        {
            printf("Campinas\n");
        }

        else if (b == a[6])
        {
            printf("Vitoria\n");
        }

        else if (b == a[7])
        {
            printf("Belo Horizonte\n");
        }
    }
}
