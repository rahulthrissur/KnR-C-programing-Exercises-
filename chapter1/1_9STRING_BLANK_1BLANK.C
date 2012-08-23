/* Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.*/

#include <stdio.h>
 main()
 {
  int c, bl;
  bl = 0;
  while ((c = getchar()) != EOF)
     if (c == ' ')
      {
        ++bl;
        if (bl <= 1)  
        putchar(c);
      }
     else
      {
        bl=0;
        putchar(c);
      }
 }
