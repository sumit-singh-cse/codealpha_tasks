#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[50];
    int choice, count = 0;

    while (1) {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nEnter Roll Number: ");
            scanf("%d", &s[count].roll);

            printf("Enter Name: ");
            scanf(" %[^\n]", s[count].name);

            printf("Enter Marks: ");
            scanf("%f", &s[count].marks);

            count++;
            printf("Student added successfully!\n");
        }
        else if (choice == 2) {
            if (count == 0) {
                printf("\nNo student records found.\n");
            } else {
                printf("\n--- Student Records ---\n");
                for (int i = 0; i < count; i++) {
                    printf("Roll: %d | Name: %s | Marks: %.2f\n",
                           s[i].roll, s[i].name, s[i].marks);
                }
            }
        }
        else if (choice == 3) {
            printf("Exiting program...\n");
            break;
        }
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}