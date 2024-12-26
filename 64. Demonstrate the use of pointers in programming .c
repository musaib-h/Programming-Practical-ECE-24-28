#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x; // Pointer to x
    
    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value at pointer ptr: %d\n", *ptr);
    printf("Address stored in ptr: %p\n", ptr);
    
    *ptr = 20; // Modifying value of x using pointer
    printf("Updated value of x: %d\n", x);
    
    return 0;
}
