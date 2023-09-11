#include <stdio.h>

int main() {
    int num1, num2;
printf("Enter the first number: ");
    scanf("%d", &num1);
printf("Enter the second number: ");
    scanf("%d", &num2);
if (num2 == 0) {
        printf("Division by zero is not allowed.\n");
        return 1;
    }
int isDivisible = (num1 % num2 == 0);
printf("%d %s divisible by %d.\n", num1, (isDivisible ? "is" : "is not"), num2);

    return 0;
}
