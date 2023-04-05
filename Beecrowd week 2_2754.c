#include <stdio.h>

int main() {

    double A, B;

    A = 234.345;

    B = 45.698;

   printf("%.6lf \-\ %.6lf\n", A, B);

    printf("%.0lf \-\ %.0lf\n", A, B);

    printf("%.1lf \-\ %.1lf\n", A, B);

    printf("%.2lf \-\ %.2lf\n", A, B);

    printf("%.3lf \-\ %.3lf\n", A, B);

    printf("%11.6e \-\ %11.6e\n", A, B);

    printf("%12.6E \-\ %12.6E\n", A, B);

    printf("%.3lf \-\ %.3lf\n", A, B);

    printf("%.3lf \-\ %.3lf\n", A, B);





    return 0;
}
