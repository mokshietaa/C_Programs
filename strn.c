//WACP to count total number of words in a string
#include <stdio.h>
int main() {
    char str[100];
    int i, words = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            words++;
        }
    }

    printf("Total number of words: %d\n", words);
    return 0;
}