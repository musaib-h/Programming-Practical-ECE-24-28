#include <stdio.h>
#include <string.h>

int isPalindrome(char *start, char *end) {
    while (start < end) {
        if (*start != *end) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Palindrome
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    if (isPalindrome(str, str + strlen(str) - 1)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}
