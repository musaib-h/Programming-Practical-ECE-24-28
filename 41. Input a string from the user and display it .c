#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str); // Takes input until the first space
    printf("You entered: %s\n", str);
    return 0;
}
