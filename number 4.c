#include <stdio.h>
int main() {
  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
printf("Common factors of %d and %d are: ", num1, num2);
  for (int i = 1; i <= num1 && i <= num2; i++) {
    if (num1 % i == 0 && num2 % i == 0) {
      printf("%d\n", i);
    }
  }
return 0;
}
