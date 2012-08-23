/*Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.*/

#include <stdio.h>
int temperature(int);
main()
{
  int cel;
  printf("Celsius to Fahrenheit table\n");
  for(cel=0;cel<=300;cel++)
  printf("%d\t%d\n", cel, temperature(cel));
}

 temperature(int c)
 { 
   int upper,fahr;
   upper = 300;
   fahr = c * 9 / 5 +32;
   return fahr;
}

