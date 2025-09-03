#include <stdio.h>
int main() {
    int i, num, sum = 0, count = 0;
    float avg;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++) {
        if (i % 2!= 0 && count <= 15) {
            printf("Odd number: %d\n", i);
            sum = sum + i;
            count= count + 1;
             avg = (float)sum / count;
             printf("Sum of first %d odd numbers: %d\n", count, sum);
             printf("Average: %.2f\n", avg); }  
        }
     return 0;
}