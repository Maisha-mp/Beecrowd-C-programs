#include <stdio.h>

#include <math.h>

int main() {

       double x1,x2,y1,y2;
      double Z,K;

    scanf("%lf%lf", &x1, &y1);

    scanf("%lf%lf", &x2, &y2);



     Z= ((x2-x1) * (x2-x1))+((y2-y1) * (y2-y1));

      K= sqrt(Z);


     printf("%.4lf \n", K);

    return 0;
}
