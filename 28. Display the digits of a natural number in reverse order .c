#include <stdio.h>

int main() {
    int num, reverse = 0, digit;
    printf("Enter a natural number: ");
    scanf("%d", &num);
    
    printf("Digits in reverse order: ");
    while (num > 0) {
        digit = num % 10;
        printf("%d ", digit);
        num /= 10;
    }
    printf("\n");
    return 0;
}
