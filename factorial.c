// factorial using while loop
#include <stdio.h>
int main() {
    int num, fact = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if(num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int i = 1;
        while(i <= num) {
            fact =fact * i;
            i++;
        }
        printf("Factorial of %d is %d\n", num, fact);
    }
}