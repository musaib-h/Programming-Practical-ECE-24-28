#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (int i = 1; count < n; i++) {
        for (int j = 1; j <= i && count < n; j++) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");
    return 0;
}
