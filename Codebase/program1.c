#include <stdio.h>
#include<math.h>
void main()
{
    int num1, num2, div = 0;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    div = num1 / num2;
    printf("Quotient of num1 and num2 is: %d", div);
    return 0;
}
