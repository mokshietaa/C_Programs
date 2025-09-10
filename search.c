//Wap to search an element in an array.
#include <stdio.h>
int main() {
    int n, i, count=0, elem=0, item;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i=0; i<=n-1; i++) {
        scanf("%d", &arr[i]);
        count=count+1;
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &item);
    for(i=0; i<=count-1; i++) {
        if(arr[i]==item) {
            elem=1;
            break;
        }
    }
    if(elem==1) {
        printf("Element %d found in the array.\n", item);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}