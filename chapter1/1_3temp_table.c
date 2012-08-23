/*Modify the temperature conversion program to print a heading above the table.*/

#include <stdio.h>

main()
{
 printf(" Fahrenheit to celsius table\n\b ");
 int fahr, celsius;
 int upper;
 upper = 300;
 fahr = 0;
 while (fahr <= upper)
  {
    celsius = 5 * (fahr-32) / 9;
    printf("%8d\t%d\n", fahr, celsius);
    fahr = fahr + 10;
  }
}

