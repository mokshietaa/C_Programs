#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers for equation type ax^2 + bx + c: ");    
    scanf("%d %d %d", &a, &b, &c);
    int discriminant = b * b - 4 * a * c;
    printf("Discriminant: %d\n", discriminant);
    if (discriminant == 0) {
        printf("The equation has real and equal root.\n");
    }
    else if (discriminant > 0) {
        printf("The equation has real and distinct roots.\n");
    }
    else if (discriminant < 0) {
        printf("The equation has imaginary roots.\n");
   }   
   return 0;
}