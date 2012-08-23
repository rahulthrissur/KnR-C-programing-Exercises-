/*Verify that the expression getchar() != EOF is 0 or 1.*/

#include <stdio.h>

 main()
{
  printf("Press any key.\n");
  printf(" getchar() != EOF = %d\n", getchar() != EOF);
  
}
