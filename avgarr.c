//WAP to print the average of n numbers in an array
#include <stdio.h>
int main() {
    int n, i, count=0;
    float sum=0.0, avg=0.0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i=0; i<=n-1; i++) {
        scanf("%d", &arr[i]);
        sum=sum+arr[i];
        count=count+1;
    }
    avg=sum/count;
    printf("The average of the array is: %f\n", avg);
    return 0;
}