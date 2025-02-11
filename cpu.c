#include <stdio.h>

int main() 
{
  unsigned int i, j = 1;

  for(i = 1; i <= 10; i++)
  {
    j = j * i;
  }

  // Output the result
  printf("Factorial of 10 is: %u\n", j);

  return 0;
}
