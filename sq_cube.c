//squares of even and cubes of odd numbers
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // For num1
    if (num1 % 2 == 0)
        printf("Square of %d is %d\n", num1, num1 * num1);
    else
        printf("Cube of %d is %d\n", num1, num1 * num1 * num1);

    // For num2
    if (num2 % 2 == 0)
        printf("Square of %d is %d\n", num2, num2 * num2);
    else
        printf("Cube of %d is %d\n", num2, num2 * num2 * num2);

    return 0;
}