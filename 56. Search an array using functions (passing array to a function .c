#include <stdio.h>

int search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return index of the key
        }
    }
    return -1; // Key not found
}

int main() {
    int arr[5], key;
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number to search: ");
    scanf("%d", &key);
    
    int index = search(arr, 5, key);
    if (index != -1) {
        printf("Element found at position: %d\n", index + 1);
    } else {
        printf("Element not found.\n");
    }
    return 0;
}
