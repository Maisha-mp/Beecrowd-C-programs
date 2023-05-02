#include<stdio.h>

int main(void)
{
    int i, a,c;

    scanf("%d", &c);

    while(c--)
    {

    scanf("%d", &a);


    if(a==0 || a==1)
    {
        printf("0\n");
    }

    else if(a%2==0)
    {
        printf("%d\n", (a/2-1));
    }

    else
    {
        printf("%d\n", a/2);
    }
    }

}
