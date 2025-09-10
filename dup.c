// WAP to print duplicate element in an array
#include <stdio.h>
int main() {
    int n, i, j, count=0, dup=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i=0; i<=n-1; i++) {
        scanf("%d", &arr[i]);
        count=count+1;
    }
    printf("The duplicate elements are:\n");
    for(i=0; i<=count-1; i++) {
        dup=0;
        for(j=0; j<=count-1; j++) {
            if(arr[i]==arr[j] && i!=j) {
                dup=1;
                break;
            }
        }
        if(dup==1) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}