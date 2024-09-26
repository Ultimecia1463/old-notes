#include <stdio.h>

int main() {

  int number, i, count=0;
  printf("Enter a positive integer: ");
  scanf("%d", &number);

  if (number == 0 || number == 1)
    count = 1;

  for (i = 2; i <= number / 2; ++i) {

    if (number % i == 0) {
      count = 1;
    }
  }

  if (count == 0)
    printf("%d is a prime number.", number);
  else
    printf("%d is not a prime number.", number);

  return 0;
} 
