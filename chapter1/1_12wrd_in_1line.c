/*Write a program that prints its input one word per line.*/

#include <stdio.h>
#define IN 1
#define OUT 0

main()
{
int c, state;
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
     putchar(c);
    }
  }
}


