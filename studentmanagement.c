#include <stdio.h>
#include <string.h>

#define MAX 100   // Maximum number of students

// Structure to store student details
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

struct Student students[MAX];
int count = 0;  // Keeps track of number of students

// Function to add a new student
void addStudent() {
    if (count == MAX) {
        printf("Student database is full!\n");
        return;
    }
    printf("Enter Roll Number: ");
    scanf("%d", &students[count].rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", students[count].name); // read string with spaces
    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);

    count++;
    printf("Student added successfully!\n");
}

// Function to display all students
void displayStudents() {
    if (count == 0) {
        printf("No records found.\n");
        return;
    }
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < count; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n",
               students[i].rollNo,
               students[i].name,
               students[i].marks);
    }
}

// Function to search student by roll number
void searchStudent() {
    int roll;
    printf("Enter Roll Number to search: ");
    scanf("%d", &roll);

    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            printf("Record Found!\n");
            printf("Roll No: %d, Name: %s, Marks: %.2f\n",
                   students[i].rollNo,
                   students[i].name,
                   students[i].marks);
            return;
        }
    }
    printf("Student with Roll No %d not found.\n", roll);
}

// Function to delete a student by roll number
void deleteStudent() {
    int roll, i, j;
    printf("Enter Roll Number to delete: ");
    scanf("%d", &roll);

    for (i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            for (j = i; j < count - 1; j++) {
                students[j] = students[j + 1]; // Shift records left
            }
            count--;
            printf("Record deleted successfully.\n");
            return;
        }
    }
    printf("Student with Roll No %d not found.\n", roll);
}

int main() {
    int choice;

    do {
        printf("\n===== Student Record Management =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            deleteStudent();
            break;
        case 5:
            printf("Exiting program...\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
