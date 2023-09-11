#include <stdio.h>
int main() {
  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
for (int i = num2; i >= 1; i--) {
    if (num1 % i == 0) {
      printf("%d is divisible by %d.\n", num1, num2);
      break;
    }
  }
if (i == 1) {
    printf("%d is not divisible by %d.\n", num1, num2);
  }
 return 0;
}
