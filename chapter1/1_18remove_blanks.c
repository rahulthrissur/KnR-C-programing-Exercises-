/*Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.*/

#include <stdio.h>
#define MAXLINE 1000
int gotline(char line[], int maxline);

main()
{
int len;

char line[MAXLINE];

while ((len = gotline(line, MAXLINE)) >0)
    if(len>1)
       printf("%s", line);
return 0;
}

  int gotline(char s[],int lim)
   {
     int c, i;
     i=0;
    while ( i < lim-1 && (c=getchar())!=EOF && c!='\n')
     if(c!= ' ' && c!='\t')
       {
        s[i] = c;
         i++;
       }
     if (c == '\n') 
      {
        s[i] = c;
        i++;
      }
     s[i] = '\0';
     return i;
   }
  
