#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], concat[200];
    
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // strlen
    printf("Length of '%s': %lu\n", str1, strlen(str1));
    
    // strcpy
    strcpy(concat, str1);
    printf("String copy: '%s' -> '%s'\n", str1, concat);
    
    // strcat
    strcat(concat, str2);
    printf("String concatenation: '%s'\n", concat);
    
    // strcmp
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
    
    // strrev (Note: Not part of standard C library; implement manually)
    printf("Reverse of '%s': ", str1);
    for (int i = strlen(str1) - 1; i >= 0; i--) {
        printf("%c", str1[i]);
    }
    printf("\n");

    return 0;
