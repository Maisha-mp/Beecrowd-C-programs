#include<stdio.h>

int main()
{
    int n, i, a[10000],b[10000];
    float e;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d" "%d", &a[i], &b[i]);
    }

   for(i=0; i<n; i++)
   {

       if(b[i]==0)
       {
           printf("divisao impossivel\n");
       }

       else
       {
         e =   (float) a[i] / b[i];

           printf("%.1f\n", e);
       }

   }

   return 0;
}
