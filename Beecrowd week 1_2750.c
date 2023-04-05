#include<stdio.h>

 int main()
 {
     int j;

      printf("---------------------------------------\n");

      printf("| decimal   |  octal  |  Hexadecimal  |\n");


     printf("---------------------------------------\n");

    for(j=0; j<=7; j++)

    {



       printf("|      %d    |    %o    |       %X       |\n", j, j, j);

    }

    for(j=8; j<=9; j++)

    {



       printf("|      %d    |   %o    |       %X       |\n", j, j, j);

    }

    for(j=10; j<=15; j++)

    {



       printf("|     %d    |   %o    |       %X       |\n", j, j, j);

    }


      printf("---------------------------------------\n");




  return 0;

    }
