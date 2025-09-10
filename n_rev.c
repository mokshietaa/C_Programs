//WAP to read n numbers of values in an array and display them in reverse
#include <stdio.h>
int main() {
    int n, i, count=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i=0; i<=n-1; i++) {
        scanf("%d", &arr[i]);
        count=count+1;
    }
    for(i=count-1; i>=0; i--) {
        printf("%d", arr[i]);
        printf(" ");
    }
    return 0;
}
