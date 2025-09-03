//to create a voting system which will accept votes until the user presses "n"
#include <stdio.h>
int main() {
    char choice, vote;
    int A = 0, B = 0, C = 0;
    do {
        printf("Vote for candidate A, B, or C: ");
        scanf(" %c", &vote);
        switch(vote) {
            case 'A': case 'a': A++; break;
            case 'B': case 'b': B++; break;
            case 'C': case 'c': C++; break;
            default: printf("Invalid vote.\n"); continue;
        }
        printf("Continue voting? (y/n): ");
        scanf(" %c", &choice);
    } while(choice == 'y' || choice == 'Y');

    printf("A: %d\nB: %d\nC: %d\n", A, B, C);
    if(A > B && A > C) printf("A wins!\n");
    else if(B > A && B > C) printf("B wins!\n");
    else if(C > A && C > B) printf("C wins!\n");
    else printf("It's a tie!\n");
    return 0; 
}