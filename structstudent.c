#include <stdio.h>

// Define a structure for student
struct Student {
    char name[50];
    int rollNo;
    float marks;
    char grade;
};

// Function to calculate grade based on marks
char calculateGrade(float marks) {
    if (marks >= 90) return 'A';
    else if (marks >= 75) return 'B';
    else if (marks >= 60) return 'C';
    else if (marks >= 50) return 'D';
    else return 'F';
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Input data for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  // read string with spaces
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%f", &students[i].marks);

        // Calculate grade
        students[i].grade = calculateGrade(students[i].marks);
    }

    // Display student records
    printf("\n--- Students Evaluation Records ---\n");
    printf("Name\tRoll No\tMarks\tGrade\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%d\t%.2f\t%c\n", students[i].name, students[i].rollNo, students[i].marks, students[i].grade);
    }

    return 0;
}
