#include<stdio.h>

int main()

{
    int n,i,j, c=0, a=0, b=0, e=0;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &j);

        if(j % 2 == 0)
        {
              c++;
        }

     if(j % 3 == 0)
     {
         a++;
     }


     if(j % 4 == 0)
     {
         b++;
     }

     if(j % 5 == 0)
     {
         e++;
     }
    }

     printf("%d Multiplo(s) de 2\n", c);
     printf("%d Multiplo(s) de 3\n", a);
     printf("%d Multiplo(s) de 4\n", b);
     printf("%d Multiplo(s) de 5\n", e);

 return 0;
}
