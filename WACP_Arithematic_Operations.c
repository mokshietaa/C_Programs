#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two integers:\n"); // Add this line
    scanf("%d", &a);
    scanf("%d", &b);
    int c=a+b;
    int d=a-b;
    int e=a*b;
    int f=a/b;
    int g=a%b;
    printf("Sum = %d\nDifference = %d\nProduct = %d\nQuotient = %d\nRemainder = %d\n", c, d, e, f, g);
    
    return 0;
}