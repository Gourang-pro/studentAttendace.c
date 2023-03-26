#include <stdio.h>
#include <stdbool.h>

#define MAX_STUDENTS 100

// Define a struct for a student
typedef struct {
    int id;
    char name[50];
    bool present;
} Student;

int main() {
    int numStudents;
    Student students[MAX_STUDENTS];

    // Get the number of students from the user
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Initialize the students array
    for (int i = 0; i < numStudents; i++) {
        printf("Enter the ID and name for student %d: ", i+1);
        scanf("%d %[^\n]s", &students[i].id, students[i].name);
        students[i].present = false;
    }

    // Take attendance
    for (int i = 0; i < numStudents; i++) {
        printf("Is student %d present? (y/n): ", i+1);
        char response;
        scanf(" %c", &response);
        if (response == 'y' || response == 'Y') {
            students[i].present = true;
        }
    }

    // Print the attendance report
    printf("Attendance Report:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%d %s %s\n", students[i].id, students[i].name, students[i].present ? "Present" : "Absent");
    }

    return 0;
}
