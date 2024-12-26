#include <stdio.h>

int main() {
    FILE *file;
    char text[100];
    
    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("Enter text to write into the file: ");
    getchar(); // To clear newline in buffer
    fgets(text, sizeof(text), stdin);
    
    fprintf(file, "%s", text);
    fclose(file);
    printf("Text written to file successfully.\n");
    return 0;
}
