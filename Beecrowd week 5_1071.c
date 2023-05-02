#include<stdio.h>

int main(void)
{
    int max,i, min, sum=0;

    scanf("%d%d", &max, &min);

    if(min< max)

    {
        for(i= min+1; i< max; i++)
    {
        if(i % 2 !=0)
    {
         sum= sum+i;

    }

    }
    }



       printf("%d\n", sum);


}
