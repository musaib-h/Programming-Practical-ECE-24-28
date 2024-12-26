#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n, topperIndex = 0;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    struct Student students[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }
    
    printf("\nTopper Details:\n");
    printf("Roll Number: %d\n", students[topperIndex].rollNo);
    printf("Name: %s\n", students[topperIndex].name);
    printf("Marks: %.2f\n", students[topperIndex].marks);
    
    return 0;
}
