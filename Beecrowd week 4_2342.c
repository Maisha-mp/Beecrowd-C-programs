#include<stdio.h>

int main()
{

int a,b,c;
char o;

scanf("%d", &a);
scanf("%d %c %d", &b, &o, &c);

if(o == '+' )
{
    if(b + c >a)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        printf("OK\n");
    }


}

if(o == '*')
{
    if(b * c> a)
    {
        printf("OVERFLOW\n");

    }

    else
    {
        printf("OK\n");
    }
}


 return 0;
}
