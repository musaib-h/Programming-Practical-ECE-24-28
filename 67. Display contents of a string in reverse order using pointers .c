#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    char *ptr = str + strlen(str) - 1; // Pointer to the last character
    
    printf("Reversed string: ");
    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n");
    
    return 0;
}
