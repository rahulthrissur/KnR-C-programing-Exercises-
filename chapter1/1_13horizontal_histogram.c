/* Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.*/

#include <stdio.h>
#define IN 1
#define OUT 0

main()
{
int c, state,p;
p= '\\';
state = OUT;
while ((c = getchar()) != EOF)
 {
   if ((c == ' ' || c == '\n' || c == '\t') && (state == IN ))
    {
     state = OUT;
     ;
     printf("\n");
    }
   if ((c == ' ' || c == '\n' || c == '\t') && (state == OUT ))
        ;
     /*putchar(c); this staement for print tab,space, newline*/
   else 
    {
     state = IN;
     putchar(p);
    }
  }
}


