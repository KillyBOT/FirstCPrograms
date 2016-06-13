#include <stdio.h>

#define LOWER 0 // The lower part of the fahr table
#define UPPER 300 // The upper part of the celsiusfahr table
#define STEP 20 // The difference between two numbers on the fahr table

main()
{
  int fahr;

  printf("This is a Fahrenheit to Celsius table.\n");
  for (fahr =  LOWER; fahr <=  UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  
}
