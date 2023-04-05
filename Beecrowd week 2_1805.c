#include <stdio.h>

int main(){
    int i, j, A, B, C;
   

    scanf("%d%d", &i, &j);


    A = i * (i + 1) / 2;
    B = j * (j + 1) / 2;

    C = B - A + i;

    printf("%d\n", C);
    return 0;
}

