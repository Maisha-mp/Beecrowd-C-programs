#include <stdio.h>
 
int main() {
 
   long long int i= pow(10,9);
   
   long long int a,b,x,y,s;
   
   scanf("%lld %lld",&a,&b);
   
   if(1 <= a && b<=i)
      {
   	x = (b*(b+1))/2;
	y = ((a-1)*a)/2;
   	s = x-y;
   	printf("%lld\n",s);
       }
    
    return 0;
}

