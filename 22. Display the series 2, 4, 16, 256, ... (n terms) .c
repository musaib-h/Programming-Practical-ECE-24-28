#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%.0f ", pow(2, pow(2, i - 1)));
    }
    printf("\n");
    return 0;
}
