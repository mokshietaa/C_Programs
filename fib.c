#include <stdio.h>
int main() {
    int a = 0, b = 1, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (b < n) {
        int temp = b;
        b = a + b;
        a = temp;
    }
    if (n == b || n == 0)
        printf("%d is a part of the Fibonacci series.\n", n);
    else
        printf("%d is not a part of the Fibonacci series.\n", n);
    return 0;
}