#include <stdio.h>

int main() {
    int i;

    // Loop from 100 to 1
    for (i = 100; i >= 1; i--) {
        if (i % 2 == 0) { // Check if the number is even
            printf("%d ", i);
        }
    }

    printf("\n"); // Move to the next line after printing numbers
    return 0;
}
