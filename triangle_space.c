/*123454321
  1234 4321
  123   321
  12     21
  1       1*/
#include <stdio.h>
int main() {
    int i, j, k, n, a=0;
    for (i = 5; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (k = (2*a)-1; k > 0; k--) {
            printf(" ");
        }
        a++;
        if(i>=4){
            for(n=4; n>0; n--) {
                printf("%d", n);
            }
        }
        else{
            for (n=i; n>0; n--) {
                printf("%d", n);
            }
        }
        printf("\n");
    }
    return 0;
}