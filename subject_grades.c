#include <stdio.h>
int main() {
    int sub1, sub2, sub3, sub4, sub5;
    printf("Enter marks for subject 1: ");
    scanf("%d", &sub1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &sub2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &sub3);
    printf("Enter marks for subject 4: ");  
    scanf("%d", &sub4);
    printf("Enter marks for subject 5: ");
    scanf("%d", &sub5);
    int total = sub1 + sub2 + sub3 + sub4 + sub5;
    int percentage = (total / 5) * 100;
    printf("Total marks: %d\n", total);
    printf("Percentage: %d\n", percentage);  
    if (percentage > 85) {
        printf("Grade: O\n");
    } else if (percentage > 75) {
        printf("Grade: A\n");
    } else if (percentage > 60) {
        printf("Grade: B\n");
    } else if (percentage > 40) {  
        printf("Grade: C\n");
    } else if (percentage > 35) { 
        printf("Grade: D\n");
    } else if (percentage < 30) {
        printf("Grade: F\n");           
        }
        return 0;
}