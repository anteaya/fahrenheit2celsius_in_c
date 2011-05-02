#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version */

/* create a function called step_size that returns 20 */

int step_size() {
  return 20;
}

int main()
{
  float fahr, celsius;
  float lower, upper;

  lower = 0;   /* lower limit of temperature scale */
  upper = 300; /* upper limit */

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step_size();
  }
  return 0;
}
