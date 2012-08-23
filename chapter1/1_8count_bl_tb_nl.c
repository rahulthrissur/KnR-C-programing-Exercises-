/*Write a program to count blanks, tabs, and newlines.*/

#include <stdio.h>
 main()
 {
   int c, nl,bl,tb;
   nl =(bl= (tb = 0));
   while ((c = getchar()) != EOF)
    {
      if (c == '\n')
      ++nl;
      if (c == '\t')
      ++tb;
      if (c == ' ')
      ++bl;
    }
printf("%d %d %d \n", nl,tb,bl);
}


