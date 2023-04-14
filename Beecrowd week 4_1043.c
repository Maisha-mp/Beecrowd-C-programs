#include <stdio.h>

int main() {


   float i,j,k,l,m;

    scanf("%f%f%f", &i, &j, &k);

    if((i+j)>k && (i+k)>j && (k+j)>i)
    {

        m=i + j + k;

    printf("Perimetro = %.1f\n",m);

    }

    else
    {
        l= 0.5 * (i+j) * k;

        printf("Area = %.1f\n",l);

    }

    return 0;
}
