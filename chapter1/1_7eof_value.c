/*program to print the value of EOF*/

#include <stdio.h>

main()
 {
  int c;

  c = getchar();

     while (c != EOF)
      {
        putchar(c);
        c = getchar();
      }

  putchar(c);
 }


