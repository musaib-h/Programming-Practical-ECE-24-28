#include <stdio.h>

int main() {
    int num1, num2, largest;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Determine the largest
    if (num1 > num2) {
        largest = num1;
    } else {
        largest = num2;
    }

    // Output the result
    printf("The largest number is: %d\n", largest);

    return 0;
}
