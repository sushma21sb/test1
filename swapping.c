#include "stdio.h"
int main() 
{
      double first=30, second=50, temp;
      temp = first;
      first = second;
      second = temp;
      printf("\nAfter swapping, firstNumber = %.2lf\n", first);
      printf("After swapping, secondNumber = %.2lf", second);
      return 0;

    return 0;
}
