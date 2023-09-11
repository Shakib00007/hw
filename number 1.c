#include <stdio.h>
int main() {
  int n;
printf("Enter a number: ");
  scanf("%d", &n);
int count = 1;
  for (int i = 2; i <= n; i++) {
    if (n % i == 0) {
      count++;
    }
  }
 printf("The number of divisors of is %d.\n", count);
return 0;
}
