/*Write a program to print a histogram of the frequencies of different characters in its input.*/

#include <stdio.h>
main()
{
  int c, i,j,d;
  int ndigit[26];
   d= '\\';
 for (i = 0; i < 26; ++i)
   ndigit[i] = 0;
 while ((c = getchar()) != EOF)
    if (c >= 'a' && c <= 'z')
       ++ndigit[c-'a'];
 for (i = 0; i < 26; ++i)
    {   printf("\n");
    for (j = 1; j <= ndigit[i]; ++j)
         putchar(d);
    }
} 

