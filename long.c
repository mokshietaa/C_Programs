//find longest word in a string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];          
    char word[50];         
    char longest[50];      
    int i, j = 0;         
    int maxLen = 0;        
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = 0;  
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {       
            word[j] = str[i];      
            j++;                   
        } else {                    
            word[j] = '\0';       
            if (j > maxLen) {      
                maxLen = j;       
                strcpy(longest, word); 
            }
            j = 0;               
        }
    }
    printf("Longest word: %s\n", longest); 
    return 0;
}
    