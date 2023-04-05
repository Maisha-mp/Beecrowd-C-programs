#include <stdio.h>

int main() {

    int A,B,C,maiorAB;

    scanf("%d" "%d" "%d", &A, &B, &C);

     maiorAB= (A+B+abs(A-B)) * 0.5;


    if(A>B && A>C)
   {
    printf("%d eh o maior\n", A);
    }
    else
        if(B>C)
    {

    printf("%d eh o maior\n", B);
    }

    else
    {

    printf("%d eh o maior\n", C);
    }

    return 0;
}


