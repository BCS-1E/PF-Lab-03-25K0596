#include <stdio.h>

int main() {
    float num;
    printf("Enter a floating-point number: ");
    scanf("%f",&num);
    printf("number with a three decimal place:%.3f\n",num);
    printf("number with a six decimal place:%.6f\n",num);
    return 0;
}
