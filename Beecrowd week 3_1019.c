#include <stdio.h>

int main() {

int a, H, M, B;

 scanf("%d", &a);

 H= a/3600;

 M= (a-H * 3600)/60;

 B= (a-H * 3600-M * 60);

 printf("%d:%d:%d\n",H, M, B);

    return 0;
}
