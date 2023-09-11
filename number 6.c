#include <stdio.h>
int main() {
  int sum = 1, num;
  scanf("%d", &num);
  if (num <= 0){
    printf("Enter positive number");
  }
  for (int i = 2; i + i <= num; i++) {
    if (num % i == 0) {
      if (i != (num / i)) {
        sum += (num / i);
      }
    }
  }
  if (sum > num) {
    printf("%d is an abundant number.\n", num);
  } else {
    printf("%d is not an abundant number. \n", num);
  }
return 0;
}
