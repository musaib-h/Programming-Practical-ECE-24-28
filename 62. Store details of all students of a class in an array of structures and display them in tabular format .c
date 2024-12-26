#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n;
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
    
    printf("\nStudent Details:\n");
    printf("Roll No\tName\t\tMarks\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\n", students[i].rollNo, students[i].name, students[i].marks);
    }
    
    return 0;
}
