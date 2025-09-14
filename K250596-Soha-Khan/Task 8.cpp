#include <stdio.h>

int main() {
    int num1, num2;

    // Input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;

    // Output
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    if (num2 != 0) {
        float quotient = (float)num1 / num2; // typecasting for decimal division
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Quotient = Undefined (division by zero)\n");
    }

    return 0;
}
	

