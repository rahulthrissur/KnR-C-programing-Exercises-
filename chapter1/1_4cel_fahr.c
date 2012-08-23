/*Write a program to print the corresponding Celsius to Fahrenheit table.*/

#include <stdio.h>

main()
{
 printf(" Celsius to Fahrenheit table\n\b ");
 int fahr, cel;
 int upper;
 upper = 300;
cel = 0;
 while (cel <= upper)
  {
   fahr = cel * 9 / 5 +32;
    printf("%8d\t%d\n", cel, fahr);
   cel = cel + 10;
  }
}

