#include <stdio.h>
int main() {
    int vote;
    int x=0, y=0, z=0;
    printf("Enter 1 to vote for X\n, 2 to vote for Y\n, or 3 to vote for Z\n: ");
    scanf("%d", &vote);
    switch (vote) {
        case 1:
            x;
            printf("You voted for X.\n");
            break;
        case 2:
            y;
            printf("You voted for Y.\n");
            break; 
        case 3:
            z;
            printf("You voted for Z.\n");
            break;      
        default:
            printf("Invalid vote.\n");
            break; }
return 0;}