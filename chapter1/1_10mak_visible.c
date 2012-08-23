#include <stdio.h>
/*  Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.  */

 main()
 {
   int c,a,b,d;
   a ='\\';
   b = 'b';
   d = 't';
 /*printf(" %c %c %c", a, b, d);*/
   while ((c = getchar()) != EOF)
    {
     if (c == '\\'|| c == '\b' || c == '\t')
       {
        if (c == '\b')
         { putchar(a);
           putchar(b);
         }        
        if (c == '\t')
         { putchar(a);
           putchar(d);
         }    
        if (c == '\\')
         {  putchar(a);
           putchar(a); 
         } 
       }
     else
        putchar(c);
 
    }
}
