#include <stdio.h>

int main() {
    int n;
    long long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    printf("Factorial of %d: %lld\n", n, factorial);
    return 0;
}
