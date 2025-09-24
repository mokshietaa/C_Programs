//wacp t display the sum of rows and and sum of columns of a 3x3 matrix
#include <stdio.h>
#define MAX 10

int main() {
    int arr[MAX][MAX], i, j, r, sum = 0, product = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < r; j++) {
            scanf("%d", &arr[i][j]);
            if (i + j == r - 1) {
                sum += arr[i][j];
                product *= arr[i][j];
            }
        }
    }

    printf("Sum of anti-diagonal: %d\n", sum);
    printf("Product of anti-diagonal: %d\n", product);

    return 0;
}