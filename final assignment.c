#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 6
#define MAX_NAME_LENGTH 50
#define MAX_COURSE_LENGTH 50
#define MAX_REGISTRATION_LENGTH 15

typedef struct {
    char name[MAX_NAME_LENGTH];
    char reg_number[MAX_REGISTRATION_LENGTH];
    char courses[3][MAX_COURSE_LENGTH];
} Student;

void sort_courses_alphabetically(Student students[], int num_students) {
    for (int i = 0; i < num_students; ++i) {
        // Sort courses using bubble sort
        for (int j = 0; j < 3 - 1; ++j) {
            for (int k = 0; k < 3 - j - 1; ++k) {
                if (strcmp(students[i].courses[k], students[i].courses[k + 1]) > 0) {
                    // Swap courses
                    char temp[MAX_COURSE_LENGTH];
                    strcpy(temp, students[i].courses[k]);
                    strcpy(students[i].courses[k], students[i].courses[k + 1]);
                    strcpy(students[i].courses[k + 1], temp);
                }
            }
        }
    }
}

int main() {
    Student students[MAX_STUDENTS];

    // Input student information
    for (int i = 0; i < MAX_STUDENTS; ++i) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; // Remove newline character

        printf("Enter registration number of student %d: ", i + 1);
        fgets(students[i].reg_number, sizeof(students[i].reg_number), stdin);
        students[i].reg_number[strcspn(students[i].reg_number, "\n")] = 0; // Remove newline character

        printf("Enter 3 courses of student %d:\n", i + 1);
        for (int j = 0; j < 3; ++j) {
            printf("Course %d: ", j + 1);
            fgets(students[i].courses[j], sizeof(students[i].courses[j]), stdin);
            students[i].courses[j][strcspn(students[i].courses[j], "\n")] = 0; // Remove newline character
        }
    }

    // Sort courses of 3 students alphabetically
    sort_courses_alphabetically(students, 3);

    // Display sorted courses
    printf("\nSorted courses of 3 students:\n");
    for (int i = 0; i < 3; ++i) {
        printf("Student %d:\n", i + 1);
        for (int j = 0; j < 3; ++j) {
            printf("Course %d: %s\n", j + 1, students[i].courses[j]);
        }
        printf("\n");
    }

    return 0;
}
